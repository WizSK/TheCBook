#include<stdio.h>
#include<string.h>
#include<math.h>
#include<ctype.h>


#define MAXLINE 100

int get_line(char line[], int lim);
int htoi(char hex[]);


int main(void) {
	char li[MAXLINE];
	get_line(li, MAXLINE);
	printf("%d", htoi(li));
}


int get_line(char line[], int lim) {
	char c;
	int i = 0;

	while ( i < lim - 1 && ( c = getchar() ) != EOF && c != '\n') {
			line[i++] = c;
		}
	line[lim] = '\0';

	return i;
}


int htoi(char hex[]) {
	int result;
	int i = 0, len = strlen(hex);

	while ( i < len ) {
		if ( hex[i] == '0' && hex[i+1] == 'x' || hex[i+1] == 'X' ) {
			i += 2;
		}
		
		int temp = tolower(hex[i]);
		if (isdigit(temp)) {
			i -= 48;
		}

		if ( isalpha(hex[temp]) && temp <= 'f' ) {
			temp = temp - 'a' + 10;
		}

		if (( hex[i] >= '0' && hex[i] <= '9') || (hex[i] >= 'a' && hex[i] <= 'f') || (hex[i] >= 'A' && hex[i] <= 'F')) {
			result += temp * (int)pow(16, len - i - 1);
		}
		else {
			printf("Error: Not a valid value.\n Try this format: 0xHHHH, where is H in hex digit.\n");
		}
		
		++i;
	}

	return result;
}




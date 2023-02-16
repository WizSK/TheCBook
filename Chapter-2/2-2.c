#include<stdio.h>


int main(void) {
	char c;
	int loop = 1;
	int i = 0;
	char s[100];
	while (loop) {
		c = getchar();

		if (c == EOF) {
			loop = 0;
		} else if ( c == '\n' ) {
			loop = 0;
		} else if ( i > 100 ) {
			loop = 0;
		}
		s[i++] = c;
	}
	
	s[100] = '\0';

	printf("%s\n", s);
}

#include <stdio.h>
#include <string.h>

#define MAXC 100


int get_char( char arr[], int lim);
int sequence(char s1[], char s2[]);


int main() {
    char s1[MAXC], s2[MAXC];
    
    printf("Give a sting for S1: ");
    get_char(s1, MAXC);
    
    printf("Give a sting for S2: ");
    get_char(s2, MAXC);

    printf("s1 is: %s\n", s1);

    sequence(s1, s2);

    printf("s2 is: %s\n", s2);
    printf("modified s1 is: %s\n", s1);

}

int get_char( char arr[], int lim) {
    char c;
    int i = 0;
    while ( i < lim && ((c = getchar()) != EOF && c != '\n') )
        arr[i++] = c;
    arr[lim] = '\0';
    return 0;
}

int sequence(char s1[], char s2[]) {

    int lenth1 = strlen(s1);
    int lenth2 = strlen(s2);
    
    for ( int i = 0; i < lenth1; i++) {
        for (int j = 0; j < lenth2; j++) {
            if (s1[i] == s2[j]) {
                s1[i] = s1[i+1];
            }
        }

    }

}

#include <stdio.h>
#include <string.h>

#define MAXC 100


void get_char( char arr[], int lim);
void sequence(char s1[], char s2[]);


int main(void) {
    // char s1[MAXC], s2[MAXC];
    
    printf("Give a sting for S1: ");
    // get_char(s1, MAXC);
    char s1[] = "adbc";
    char s2[] = "asdfjlk";
    printf("Give a sting for S2: ");
    // get_char(s2, MAXC);

    printf("s1 is: %s\n", s1);
    printf("s2 is: %s\n", s2);


    sequence(s1, s2);

    printf("\nmodified s1 is: %s\n", s1);

}

void get_char( char arr[], int lim) {
    char c;
    int i = 0;
    while ( i < lim && ((c = getchar()) != EOF && c != '\n') )
        arr[i++] = c;
    arr[i] = '\0';
}

void sequence(char s1[], char s2[]) {
    int i, j, k; 
    for ( i = 0; s2[i] != '\0' ; ++i) {
        for ( j = k = 0; s1[j] != '\0' ; ++j) {
            if (s2[i] != s1[j]) {
                s1[k++] = s1[j];
            }
        }
        s1[j] = '\0';
    }

}

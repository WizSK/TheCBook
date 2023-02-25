#include <stdio.h>


void escape(char x) {
    switch (x) {

        case ' ':
            printf("space");
            break;
        case '\n':
            printf("\\n");
            break;
        case '\t':
            printf("\\t");
            break;
        default:
            printf("\%c");
            break;

    }
}


int main(void) {
    char c;
    while ((c = getchar()) != EOF && c != 'E')
        escape(c);


}

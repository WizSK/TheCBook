#include<stdio.h>

int main(void) {
	printf("%c = %d\n", 'a', 'a');
	printf("%c = %d\n", 'A', 'A');
	printf("%c = %d\n", 'z', 'z');
	printf("%c = %d\n", 'Z', 'Z');
	printf("%d\n", 'a' - 'A' );
}

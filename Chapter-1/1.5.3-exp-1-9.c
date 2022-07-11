#include <stdio.h>

void main()
{
	int c;

	while ((c = getchar()) != EOF){
		if ( c == '\t' )
			printf("\\t");
		else if ( c == '\b' )
			printf("\\b");
		else if ( c == ' ' )
			printf("\\s");
		else if ( c == '\n' )
			printf("\\n");
		else if ( c == '\\' )
			printf("\\\\");
		else
			putchar(c);
	
	}
}

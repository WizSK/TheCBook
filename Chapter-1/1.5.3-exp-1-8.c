#include <stdio.h>

void main()
{
	int c, nl, bl, tb;

	nl = 0;
	bl = 0;
	tb = 0;
	while ((c = getchar()) != EOF){
		if ( c == '\n' )
			++nl;
		else if ( c == '\b' )
			++bl;
		else if ( c == '\t' )
			++tb;
	}
	printf("newline %d\n blankcs %d\n tabs %d\n", nl, bl, tb);
}

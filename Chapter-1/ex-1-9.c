#include <stdio.h>

#define NOBLANK 'a'

/* repalcing "dubble or more blank space with one space" */
void main()
{
	int c, lastc;

	lastc = NOBLANK;
	while ((c = getchar()) != EOF) {
		if (c != ' ' || lastc != ' ' )
			putchar(c);
		lastc = c;
	}
}



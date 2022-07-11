#include <stdio.h>

/*
main()
{
	int c;

	c = getchar();
	while (c != EOF) {
		putchar(c);
		c = getchar();
	}
}
*/

/* V2 */
main()
{
	int c;
	while ( (c = getchar()) != EOF )
		putchar(c);
}

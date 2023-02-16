#include <stdio.h>
#include <limits.h>

void main()
{
	printf("#### Char ####\n");
	printf("max sc %d\n", SCHAR_MAX);
	printf("mim sc %d\n", SCHAR_MIN);
	printf("max uc %d\n", UCHAR_MAX);

	printf("\n### shorts ####\n");
	printf("Singed Shorts Max %d\n", SHRT_MAX);
	printf("Singed Shorts Min %d\n", SHRT_MIN);
	printf("UnSinged Shorts Max %u\n", USHRT_MAX);

	printf("\n### int ####\n");
	printf("Singed INT Max %d\n", INT_MAX);
	printf("Singed INT Min %d\n", INT_MIN);
	printf("UnSinged INT Max %u\n", UINT_MAX);

	printf("\n### long ####\n");
	printf("Singed long Max %ld\n", LONG_MAX);
	printf("Singed long Min %ld\n", LONG_MIN);
	printf("UnSinged long Max %lu\n", ULONG_MAX);


	printf("\n### long ####\n");
	printf("Singed longlong Max %lld\n", LLONG_MAX);
	printf("Singed longlong Min %lld\n", LLONG_MIN);
	printf("UnSinged longlong Max %llu\n", ULLONG_MAX);



}


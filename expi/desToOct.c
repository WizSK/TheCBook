#include <stdio.h>
/* 
 * TODO:
 *      1. vai dosomiker por to show kore na lol
 */

#define MAXARR 100


int desToOct(int arr, int oct[]);
double dbl(double arg, int oct[]);

int main(void) {
    int oct[MAXARR];
    double dec;
    printf("Give an decmial numbur: ");
    scanf("%lf", &dec);

    if ( (int)dec == dec ) {
        int ret = desToOct((int)dec, oct);
        printf("Octal Number: ");
        while (ret >= 0)
        {
            printf("%d", oct[ret--]);
        }
        printf("\n");
    }
    else {
        double dosomik = dec - (int)dec;
        int ret = desToOct((int)dec, oct);
        printf("Octal Number: ");
        while (ret >= 0)
        {
            printf("%d", oct[ret--]);
        }
        printf(".");
        ret = dbl(dosomik, oct);
        for (int a;a >= ret; a++)
        {
            printf("%d", oct[a]);
        }
        printf("\n");
    }

}


int desToOct(int arr, int oct[]) {
    int isDone = 1;
    int i, rem;

    for ( i = 0; isDone; i++)
    { 
        if ( arr > 8 ) 
        {
            oct[i] = arr%8;
            arr = (int)arr/8;
        }
        else 
        {
            isDone = 0;
            oct[i] = arr%8;
            if (i < (MAXARR - 1))
            {
                oct[i+1] = '\0';
            } 
            else 
            {
                oct[i] = '\0';
            }


        }

    }
    return i-1;
}


double dbl(double arg, int oct[])
{
    int i;
    double temp;

    for (i = 0; i <= 4; i++) {
        temp = arg * 8.0;
        oct[i] = (int)temp;
        arg = temp - (int)temp;
    }
    return 4;
}




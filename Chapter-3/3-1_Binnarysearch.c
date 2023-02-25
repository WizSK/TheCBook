#include <stdio.h>

int binsearch(int x, int n, int v[]);


int main(void)
{
    int x, n;
    printf("Give a num: ");
    scanf("%d", &x);

    int v[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17};
    
    printf("location: %d\n", binsearch(x, 17, v));

}

int binsearch(int x, int n, int v[])
{
    int low, high, mid, i;
   
    i = 0;
    low = 0;
    high = n - 1;

    while (low <= high) {
        printf("Iran %dx\n", i++);
        mid = (low +high) / 2;
        printf("mid %d\n", mid);
        if (x < v[mid])
            high = mid - 1;
        else if ( x > v[mid])
            low = mid + 1;
        else
            return mid;
    }
    return -1;
}

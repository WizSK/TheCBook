#include <stdio.h>

int main(void) {
    unsinged int ibuff[10];

    long lbuff[4];

    int buff[] = {1, 3, 4, 5, 6, 7, 9, 10};

    int ind2 = buff[1];

    // Pointers 
    
    int x = 12;
    int *px = &x;
    int y = x - *px;


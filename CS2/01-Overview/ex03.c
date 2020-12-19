/*
 * File: ex03.c
 * ------------
 * This program compute the sum of  1 to 100.
 */

#include <stdio.h>
#include "genlib.h"
#include "simpio.h"

/* Main program */

int main(void)
{
    int i,  sum;

    sum = 0;
    for (i = 1; i <= 100; i++) {
        sum += i;
    }
    printf("The sum of 1 to 100 is %d.\n", sum);

    return 0;
}

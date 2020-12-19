/*
 * File: ex01.c
 * ------------
 * This program read celsius temperature, and show the corresponding 
 * fahrenheit temperature.
 * formula: F = 9 / 5 * C + 32
 */

#include <stdio.h>
#include "genlib.h"
#include "simpio.h"

/* Main program */

int main(void)
{
    double c;

    printf("Enter a celsius temperature: ");
    c = GetReal();
    printf("The corresponding fahrenheit temperature is %g.\n",
        9.0 / 5.0 * c + 32);

    return 0;
}

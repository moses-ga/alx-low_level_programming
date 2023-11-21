#include "main.h"
#include <stdio.h>

/**
* swap_int - Function to swap integer numbers
*@a: paraamter to swap
*@b: parameter to dwap
*/

void swap_int(int *a, int *b)
{
int c;
c = *b;
*b = *a;
*a = c;
}


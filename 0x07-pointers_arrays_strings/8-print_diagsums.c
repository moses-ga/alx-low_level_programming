#include "main.h"
#include <stdio.h>
/**
  * print_diagsums - Function hat prints the sum of the two diagonals
  * @size: size of firstparameter
  * @a: second parameter
  * Return: Always 0.
  */

void print_diagsums(int *a, int size)
{
	int c1;
	int c2;
	int z;

	c1 = 0;
	c2 = 0;

	for (z = 0; z < size; z++)
	{
	c1 = c1 + a[z * size + z];
	}
	for (z = size - 1; z >= 0; z--)
	{
	c2 += a[z * size + (size - z - 1)];
	}
	printf("%d, %d\n", c1, c2);
}


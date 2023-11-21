#include "main.h"

/**
 * print_line - function that draws a straight line
 * @a: parameteer that will be printed
 */
void print_line(int a)
{
	if (a <= 0)
	{
	_putchar('\n');
	}
	else
	{
	int j;

	for (j = 1; j <= a; j++)
	{
	_putchar('_');
	}
	_putchar('\n');
	}
}


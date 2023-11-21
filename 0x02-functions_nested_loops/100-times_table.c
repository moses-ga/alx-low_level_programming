#include "main.h"


/**
  * print_times_table -function that print multiplication
  * start with 0.
  *@n: the value of the timea table printed
  */


void print_times_table(int n)
{


	int a, multu, product;


	if (n >= 0 && n <= 15)
	{
	for (a = 0; a <= n; a++)
	{
	_putchar('0');
	for (multu = 1; multu <= n; multu++)
	{
	_putchar(',');
	_putchar(' ');
	product = a * multu;
	if (product <= 99)
	_putchar(' ');
	if (product <= 9)
	_putchar(' ');
	if (product >= 100)
	{
	_putchar((product / 100) + '0');
	_putchar(((product / 10)) % 10 + '0');
	}
	else if (product <= 99 && product >= 10)
	{
	_putchar((product / 10) + '0');
	}
	_putchar((product % 10) + '0');
	}
	_putchar('\n');
	}
	}
}


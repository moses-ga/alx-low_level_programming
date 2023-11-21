#include "main.h"
/**
 * times_table - prints the 9 times table
 * Return: void
 */
void times_table(void)
{
	int i, j, pr, t, one;


	for (i = 0; i <= 9; i++)
	{
	for (j = 0; j <= 9; j++)
	{
	pr = i * j;

	t = pr / 10;
	one = pr % 10;
	if (j == 0)
	{
	_putchar('0');
	}
	else if (pr < 10)
	{
	_putchar(',');
	_putchar(' ');
	_putchar(' ');
	_putchar(one + '0');
	}
	else
	{


		_putchar(',');
		_putchar(' ');
		_putchar(t + '0');
		_putchar(one + '0');
	}
	}
	_putchar('\n');
	}
}


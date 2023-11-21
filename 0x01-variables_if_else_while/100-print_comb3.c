#include <stdio.h>
/**
 * main - main function to print combinations of digit.
 * Return: Always returns 0 when this program is executed.
 */


int main(void)
{
	int a, b;

	for (a = 0; a <= 8; a++)
	{
	for (b = a + 1; b <= 9; b++)
	{
	putchar(a + '0');
	putchar(b + '0');
	if (a != 8 || b != 9)
	{
	putchar(',');
	putchar(' ');
	}
	}
	}
	putchar('\n');
	return (0);
}


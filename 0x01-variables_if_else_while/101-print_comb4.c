#include <stdio.h>
/**
 * main - main function will prints all possible combination od three digits
 * Return: Always returns 0 when this program is executed.
 */

int main(void)
{
	int a, b, d;

	for (a = 0; a <= 7; a++)
	{
	for (b = a + 1; b <= 8; b++)
	{
	for (d = b + 1; d <= 9; d++)
	{
	putchar(a + '0');
	putchar(b + '0');
	putchar(d + '0');
	if (a != 7 || b != 8 || d != 9)
	{
	putchar(',');
	putchar(' ');
	}
	}
	}
	}
	putchar('\n');
	return (0);
}

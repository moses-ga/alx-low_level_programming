#include <stdio.h>
/**
 * main - This is the main function of this program.
 * Return: Always returns 0 when this program is executed.
 */

int main(void)
{
	int a;

	for (a = '0'; a <= '9'; a++)
	{
	putchar(a);
	if (a != '9')
	{
	putchar(',');
	putchar(' ');
	}
	}
	putchar('\n');
	return (0);
}


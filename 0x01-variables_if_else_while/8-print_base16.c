#include <stdio.h>
/**
 * main - This is the main function of this program.
 * Return: Always returns 0 when this program is executed.
 */

int main(void)
{
	char number;

	for (number = '0'; number <= '9'; number++)
	{
	putchar(number);
	}
	for (number = 'a'; number <= 'f'; number++)
	{
	putchar(number);
	}
	putchar('\n');
	return (0);
}


#include <stdio.h>
/**
 * main - This is the main function of this program.
 * Return: Always returns 0 when this program is executed.
 */


int main(void)
{
	char LETTER;

	for (LETTER = 'a'; LETTER <= 'z'; LETTER++)
	{
		putchar(LETTER);
	}
	for (LETTER = 'A'; LETTER <= 'Z'; LETTER++)
	{
		putchar(LETTER);
	}
	putchar('\n');
	return (0);
}

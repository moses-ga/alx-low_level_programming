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
	if (LETTER != 'q' && LETTER != 'e')
	{
	putchar(LETTER);
	}
	}
	putchar('\n');
	return (0);
}


#include "main.h"
/**
 * print_alphabet_x10 - prints the alphabet in lowercase 10 times
 */
void print_alphabet_x10(void)
{
	char LETTER;
	int cou = 0;

	while (cou < 10)
	{
	for (LETTER = 'a'; LETTER <= 'z'; LETTER++)
	{
		_putchar(LETTER);
	}
	_putchar('\n');
	cou++;
	}
}


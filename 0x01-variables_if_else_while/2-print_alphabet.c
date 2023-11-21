#include <stdio.h>
/**
 * main - This is the main function of this program.
 * Return: Always returns 0 when this program is executed.
 */

int main(void)
{
	char alphabet = 'a';

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		putchar(alphabet);
	}
	putchar('\n');
	return (0);
}

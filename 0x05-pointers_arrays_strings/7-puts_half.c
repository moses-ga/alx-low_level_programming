#include "main.h"
/**
* puts_half - function to print a jaft of string
* @s: string parameter
*/

void puts_half(char *s)
{
	int i;
	int c = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
	c++;
	}
	for (i = c / 2; s[i] != '\0'; i++)
	{
	putchar(s[i]);
	}
	putchar('\n');
}

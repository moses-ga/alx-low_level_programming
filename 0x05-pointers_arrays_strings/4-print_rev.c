#include "main.h"
/**
* print_rev - function to print reverse of string
*@string: string parameter that will be reversed
*/
void print_rev(char *string)
{
	int leng = 0;
	int i;

	for (i = 0; string[i] != '\0'; i++)
	{
		leng++;
	}
	for (i = leng - 1; i >= 0; i--)
	{
	putchar(string[i]);
	}
	putchar('\n');
}

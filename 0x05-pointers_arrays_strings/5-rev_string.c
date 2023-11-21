#include "main.h"
#include <stdio.h>

/**
 * rev_string - Function to reverse a string
 * @string: parameter
 */
void rev_string(char *string)
{
	int c = 0;
	int a, b;

	for (a = 0; string[c] != '\0'; a++)
	{
		c++;
	}
	for (a = 0; a < c / 2; a++)
	{
	b = string[a];
	string[a] = string[c - 1 - a];
	string[c - 1 - a] = b;
	}
}

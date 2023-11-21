#include "main.h"
/**
* _puts - function that prints a string
*@string: string parameter
*/

void _puts(char *string)
{
	while (*string != '\0')
	{
	putchar(*string);
	string++;
	}
	putchar('\n');
}

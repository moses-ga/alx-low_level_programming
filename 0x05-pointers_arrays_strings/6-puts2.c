#include "main.h"
/**
* puts2 - function to prints
*@s: parammeter
*/
void puts2(char *s)
{
	int a = 0;

	while (s[a] != '\0')
	{
		if (a % 2 == 0)
		{
			putchar(s[a]);
		}
		a++;
	}
	putchar('\n');
}

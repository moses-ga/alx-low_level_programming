#include "main.h"
/**
 * string_toupper - Function that changes all lowercase letters
* of string to uppercase
 * @s: String parameter
 * Return: return dest
 */

char *string_toupper(char *s)
{
	int a;

	a = 0;
	while (s[a] != '\0')
	{
	if (s[a] >= 'a' && s[a] <= 'z')
	s[a] = s[a] - 32;
	a++;
	}
	return (s);
}


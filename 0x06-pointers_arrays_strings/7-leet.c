#include "main.h"
#include <stdio.h>
/**
  *leet - Function to encodes a string into 1337;
  * @s: Parameter
  *Return: return s
 */
char *leet(char *s)
{
	int a, b;
	char string1[] = "aAeEoOtTlL";
	char string2[] = "4433007711";

	for (a = 0; s[a] != '\0'; a++)
	{
	for (b = 0; b < 10; b++)
	{
	if (s[a] == string1[b])
	{
	s[a] = string2[b];
	}
	}
	}
	return (s);
}


#include "main.h"
/**
  *_strcat - function that will concatinate two strings
  * @src: parameter
  * @dest: parameter
  * Return: return dest;
  */

char *_strcat(char *dest, char *src)
{
	int a, b;

	a = 0;
	b = 0;

	while (dest[a] != '\0')
	{
	a++;
	}

	while (src[b] != '\0')
	{
	dest[a] = src[b];
	a++;
	b++;
	}
	dest[a] = '\0';
	return (dest);
}


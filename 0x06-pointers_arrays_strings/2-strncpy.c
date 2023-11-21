#include "main.h"
/**
  * _strncpy - Function to copy string
  * @src: parameter
  * @dest: parameter
  * @n: parameter
  * Return: return dest;
  */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
	dest[i] = src[i];
	i++;
	}
	while  (i < n)
	{
	dest[i] = '\0';
	i++;
	}
	return (dest);
}

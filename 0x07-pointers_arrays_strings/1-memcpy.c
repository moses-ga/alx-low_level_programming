#include "main.h"
/**
  * _memcpy - Function that copies memory area
  * @src: This is Source parameter of this function
  * @dest: Second parameter destination
  * @n: Third parameter size of the memory
  * Return: return copied memory;
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
	dest[a] = src[a];
	}
	return (dest);
}


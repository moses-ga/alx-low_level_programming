#include "main.h"
/**
  * _memset - Function that fills memory with
  * a constant byte
  * @b: Parameter used to fill the memory
  * @s: Second Paramater;
  * @n: Third parameter;
  * Return: return s;
  */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	s[i] = b;
	return (s);
}


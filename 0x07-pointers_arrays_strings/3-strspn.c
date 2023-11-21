#include "main.h"
/**
  * _strspn - Function that get length of prefix substring
  * @s: First Parameter
  * @accept: Second parameter
  * Return: return 0.
  */
unsigned int _strspn(char *s, char *accept)
{

	unsigned int _strspn(char *s, char *accept);
	unsigned int a = 0;
	int b;

	while (*s)
	{
	for (b = 0; accept[b]; b++)
	{
	if (*s == accept[b])
	{
	a++;
	break;
	}
	else if (accept[a + 1] == '\0')
	return (a);
	}
	s++;
	}
	return (a);
}


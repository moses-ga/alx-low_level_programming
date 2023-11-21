#include "main.h"
/**
  * _strstr - Function that locates a substring
  * @needle: Parameter
  * @haystack: parameter
  * Return: return 0.
  */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
	char *A = haystack;
	char *B = needle;

	while (*A == *B && *B != '\0')
	{
	A++;
	B++;
	}
	if (*B == '\0')
	{
	return (haystack);
	}
	}
	return (NULL);
}


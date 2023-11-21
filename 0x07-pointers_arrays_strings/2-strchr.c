#include "main.h"
/**
  * _strchr - Function that locates a character in string
  * @str: String parameter
  *
  * @ch: char parameter
  *
  * Return: return 0.
  */
char *_strchr(char *str, char ch)
{
	int a;

	for (a = 0; str[a] >= '\0'; a++)
	{
	if (str[a] == ch)
	return (str + a);
	}
	return (0);
}


#include "main.h"
/**
* _strlen - function that will return lenght of string
* @s: string parameter
* Return: return length of string
*/

int _strlen(char *s)
{
	int len = 0;
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
	len++;
	}
return (len);
}

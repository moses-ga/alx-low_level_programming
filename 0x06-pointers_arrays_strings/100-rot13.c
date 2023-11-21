#include "main.h"
#include <stdio.h>
/**
 * rot13 - Function that encodes a string using rot13;
 * @str: parameter
 * Return: return String;
 */

char *rot13(char *str)
{
	int a, b;
	char d1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char drot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (a = 0; str[a] != '\0'; a++)
	{
	for (b = 0; b < 52; b++)
	{
	if (str[a] == d1[b])
	{
	str[a] = drot[b];
	break;
	}
	}
	}
	return (str);
}


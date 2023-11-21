#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - function thst duplicate to new memory space location
 * @s: parameter of this function
 * Return: return  0
 */
char *_strdup(char *s)
{
	char *a;
	int i, b = 0;

	if (s == NULL)
	return (NULL);
	i = 0;
	while (s[i] != '\0')
	i++;
	a = malloc(sizeof(char) * (i + 1));
	if (a == NULL)
	return (NULL);
	for (b = 0; s[b]; b++)
	a[b] = s[b];
	return (a);
}


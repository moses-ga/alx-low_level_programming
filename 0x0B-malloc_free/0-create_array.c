#include "main.h"
#include <stdlib.h>
/**
 * create_array -  Function thar creates an array of chars,
 * and initializes it with a specific char.
 * @s: parameter s
 * @c: parameter c
 * Return: return p to array or NULL
*/
char *create_array(unsigned int s, char c)
{
	char *string;

	unsigned int i;

	string = malloc(sizeof(char) * s);
	if (s == 0 || string == NULL)
	return (NULL);
	for (i = 0; i < s; i++)
	string[i] = c;
	return (string);
}


#include "main.h"
/**
 * *_strcpy - function that copies the string pointed by src,
* @dest: parameter1
* @src: source parameter 2
*Return: return dest
*/
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
	dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}

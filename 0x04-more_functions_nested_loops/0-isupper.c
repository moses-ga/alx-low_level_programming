#include "main.h"
/**
 * _isupper - Function that checks uppercase letters
 * @a: parameter to check
 * Return: return 1 if a is uppercase 0 otherwise
 */
int _isupper(int a)
{
	if (a >= 'A' && a <= 'Z')
	return (1);
	else
	return (0);
}

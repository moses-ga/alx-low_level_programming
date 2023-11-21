#include "main.h"
/**
 * _isdigit - function to check if numbers
 * @n:  to be checked
 *
 * Return: return 1 if it is a number 0 otherwise
 */

int _isdigit(int n)
{
	if (n >= '0' && n <= '9')
	return (1);
	else
	return (0);
}


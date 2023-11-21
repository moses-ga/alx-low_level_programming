#include "main.h"
/**
  * factorial - function that returns factorial
  * @n: parameter
  * Return: return n number.
  */
int factorial(int n)
{
	if (n < 0)
	return (-1);
	if (n == 0)
	return (1);
	return (n * factorial(n - 1));
}


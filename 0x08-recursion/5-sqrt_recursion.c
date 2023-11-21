#include "main.h"
int actual_sqrt_recursion(int n, int i);
/**
 * _sqrt_recursion - function that returns the natural
* square root of a number
 * @n: parameter to calculate the square root of a number
 * Return: return square root
 */
int _sqrt_recursion(int n)
{

	if (n < 0)
	return (-1);
	return (actual_sqrt_recursion(n, 0));
}
/**
 * actual_sqrt_recursion - function that recurses to find the natural
 * square root of a number
 * @n: parameter number to calculate the sqaure root of
 * @a: iterator
 * Return: the resulting square roo
 */
int actual_sqrt_recursion(int n, int a)
{
	if (a * a > n)
	return (-1);
	if (a * a == n)
	return (a);
return (actual_sqrt_recursion(n, a + 1));
}


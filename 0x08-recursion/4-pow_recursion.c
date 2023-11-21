#include "main.h"
/**
  * _pow_recursion - Function that power
  * @x: first parameter
  * @y: second parameter
  * Return: return value of a number
  */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, (y - 1)));
	return (0);
}


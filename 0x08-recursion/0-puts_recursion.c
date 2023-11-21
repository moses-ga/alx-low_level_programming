#include "main.h"
/**
  * _puts_recursion - Function that prints a string
  * @str: Parameter
  * Return: return 0.
  */
void _puts_recursion(char *str)
{
	if (*str)
	{
	_putchar(*str);
	_puts_recursion(str + 1);
	}
	else
	_putchar('\n');
}


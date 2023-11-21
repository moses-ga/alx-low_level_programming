#include "main.h"
/**
  * _strlen_recursion - function that return length of string
  * @str: parameter
  * Return: Length of string
  */
int _strlen_recursion(char *str)
{
	int length = 0;

	if (*str)
	{
	length++;
	length += _strlen_recursion(str + 1);
	}
	return (length);
}


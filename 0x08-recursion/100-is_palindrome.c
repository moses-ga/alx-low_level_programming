#include "main.h"
int check_pal(char *s, int i, int len);
int _strlen_recursion(char *s);
/**
 * is_palindrome - function to checks if a string is a palindrome
 * @s: parmeter to trverse a string
 * Return: return 1 else return 0
 */
int is_palindrome(char *s)
{
	if (*s == 0)
	return (1);
	return (check_pal(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - function returns the length of a string
 * @s: parameter
 *
 * Return: return length
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * check_pal - function to checks the characters recursively for palindrome
 * @str: parameter
 * @i: count
 * @length: length of the string
 *
 * Return: return 1 if palindrome, else 0
 */
int check_pal(char *str, int i, int length)
{
	if (*(str + i) != *(str + length - 1))
	return (0);
	if (i >= length)
	return (1);
	return (check_pal(str, i + 1, length - 1));
}


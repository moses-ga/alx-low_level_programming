#include <stdio.h>
#include "main.h"
/**
 * _atoi - function to converts a string to an integer
 * @str: string parameter
 * Return: return string into int;
*/
int _atoi(char *str)
{
	int i, a, b, c, d, digit;

	i = 0;
	a = 0;
	b = 0;
	c = 0;
	d = 0;
	digit = 0;
	while (str[c] != '\0')
	c++;
	while (i < c && d == 0)
	{
	if (str[i] == '-')
	++a;
	if (str[i] >= '0' && str[i] <= '9')
	{
	digit = str[i] - '0';
	if (a % 2)
	digit = -digit;
	b = b * 10 + digit;
	d = 1;
	if (str[i + 1] < '0' || str[i + 1] > '9')
	break;
	d = 0;
	}
	i++;
	}
	if (d == 0)
	return (0);
	return (b);
}
/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int result, num1, num2;

	if (argc < 3 || argc > 3)
	{
	printf("Error\n");
	return (1);
	}
	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);
	result = num1 * num2;
	printf("%d\n", result);
	return (0);
}



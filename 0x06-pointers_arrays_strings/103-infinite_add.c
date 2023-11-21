#include "main.h"
/**
   * rev_string - function to reverse array
   * @n: parameter
   * Return: return 0
 */

void rev_string(char *n)
{
	int a = 0;
	int b = 0;
	char t;

	while (*(n + a) != '\0')
	{
	a++;
	}
	a--;

	for (b = 0; b < a; b++, a--)
	{
	t = *(n + b);
	*(n + b) = *(n + a);
	*(n + a) = t;
	}
}

/**
* infinite_add - function to add two numbers together
 * @n1: 1st number to add
 * @n2: 2nd number to add
 * @r: pointer to buffer
 * @size_r: buffer size
 * Return: pointer to calling function
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int overf = 0, a = 0, b = 0, d = 0;
	int v1 = 0, v2 = 0, t_t = 0;

	while (*(n1 + a) != '\0')
	a++;
	while (*(n2 + b) != '\0')
	b++;
	a--;
	b--;
	if (b >= size_r || a >= size_r)
	return (0);
	while (b >= 0 || a >= 0 || overf == 1)
	{
	if (a < 0)
	v1 = 0;
	else
	v1 = *(n1 + a) - '0';
	if (b < 0)

	v2 = 0;
	else
	v2 = *(n2 + b) - '0';
	t_t = v1 + v2 + overf;
	if (t_t >= 10)
	overf = 1;
	else
	overf = 0;
	if (d >= (size_r - 1))
	return (0);
	*(r + d) = (t_t % 10) + '0';
	d++;
	b--;
	a--;
	}
	if (d == size_r)
	return (0);
	*(r + d) = '\0';
	rev_string(r);
	return (r);
}

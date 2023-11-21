#include "main.h"
#include <stdio.h>
/**
 * print_buffer - Function that prints a buffer
 * @a: parameter
 * @s: size
 * Return: return 0;
 */

void print_buffer(char *a, int s)
{
	int i;
	int j;
	int k;

	i = 0;

	if (s <= 0)
	{
	printf("\n");
	return;
	}
	while (i < s)
	{
	j = s - i < 10 ? s - i : 10;
	printf("%08x: ", i);
	for (k = 0; k < 10; k++)
	{
	if (k < j)
	printf("%02x", *(a + i + k));
	else
	printf("  ");
	if (k % 2)
	{
	printf(" ");
	}
	}
	for (k = 0; k < j; k++)
	{
	int b = *(a + i + k);

	if (b < 32 || b > 132)
	{
	b = '.';
	}
	printf("%c", b);
	}
	printf("\n");
	i += 10;
	}
}


#include <stdio.h>
#include <math.h>

/**
 * main - program to finds and prints the largest prime factor
 * Return: retun 0
 */
int main(void)
{
	long int a;
	long int b;
	long int j;

	a = 612852475143;
	b = -1;

	while (a % 2 == 0)
	{
	b = 2;
	a /= 2;
	}

	for (j = 3; j <= sqrt(a); j = j + 2)
	{
	while (a % j == 0)
	{
	b = j;
	a = a / j;
	}
	}

	if (a > 2)
	b = a;

	printf("%ld\n", b);

	return (0);
}


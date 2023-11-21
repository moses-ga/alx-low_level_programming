#include <stdio.h>
/**
  * main - program that finds amd prints the sum
  * less than 4000000.
  * Return: return 0.
  */

int main(void)
{
	int a = 0;
	long b = 1, c = 2, sum = c;


	while (c + b < 4000000)
	{
		c += b;
		if (b % 2 == 0)
		sum += c;
		b = c - b;
		++a;
	}
	printf("%ld", sum);
	return (0);
}


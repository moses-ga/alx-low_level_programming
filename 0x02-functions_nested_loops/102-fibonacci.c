#include <stdio.h>
/**
  * main - prints the first 52 fibonacci
  * Return: return 0.
  */

int main(void)
{
	int a = 0;
	long b = 1, d = 2;


	while (a < 50)
	{
	if (a == 0)
	printf("%ld", b);
	else if (a == 1)
	printf(", %ld", d);
	else
	{
	d += b;
	b = d - b;
	printf(", %ld", d);
	}
	++a;
	}
	printf("\n");
	return (0);
}

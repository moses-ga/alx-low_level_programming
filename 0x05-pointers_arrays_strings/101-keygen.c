#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - our main function to generate random number*
 * Return: return 0;
 */
int main(void)
{
	int passwd[100];
	int a, sum, num;

	sum = 0;

	srand(time(NULL));

	for (a = 0; a < 100; a++)
	{
	passwd[a] = rand() % 78;
	sum += (passwd[a] + '0');
	putchar(passwd[a] + '0');
	if ((2772 - sum) - '0' < 78)
	{
	num = 2772 - sum - '0';
	sum += num;
	putchar(num + '0');
	break;
	}
	}

	return (0);
}


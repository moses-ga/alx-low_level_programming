#include "main.h"
/**
  * reverse_array - Function to reverse an array
  * @a: parameter
  * @n: Function parameter
  * Return: return 0;
  */
void reverse_array(int *a, int n)
{
	int i, j;

	for (i = 0; i < n--; i++)
	{
	j = a[i];
	a[i] = a[n];
	a[n] = j;
	}
}


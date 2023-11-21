#include <stdio.h>
/**
* print_array - function to print arrray numbers
* @arr: parameter
* @n: paramter n
*/

void print_array(int *arr, int n)
{
	int j;

	for (j = 0; j < n; j++)
{
	printf("%d", arr[j]);
	if (j < n - 1)
{
	printf(", ");
}
}
	printf("\n");
}

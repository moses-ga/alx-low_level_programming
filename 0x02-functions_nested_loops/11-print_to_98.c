#include "main.h"
#include <stdio.h>


/**
 * print_to_98 - prints all natural number from n to 98
 * @a: Number that will be printed
 * Return: return 0.
 */


void print_to_98(int a)
{
if (a <= 98)
{
for (; a <= 98; a++)
{
if (a == 98)
{
printf("%d", a);
printf("\a");
break;
}
else
{
printf("%d, ", a);
}
}
}
else
{
for (; a >= 98; a--)
{
if (a == 98)
{
printf("%d", a);
printf("\a");
break;
}
else
{
printf("%d, ", a);
}
	
}
	
}
}


#include "main.h"

/**
 * print_sign - function to print sign of number
 * @a: parameter
 * Return: return 1 if a is +, 0 if a is 0 and -1 otherwise
 */
int print_sign(int a)
{
if (a > 0)
{
_putchar(43);
return (1);
}
else if (a < 0)
{
_putchar(45);
return (-1);
}
else
{
_putchar(48);
return (0);
}
}


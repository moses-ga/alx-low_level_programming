#include <stdio.h>
/**
*print_last_digit - function to print last digit
*@a: last digit that will be printed
*Return: return last digit
*/

int print_last_digit(int a)
{
int lastdigit;


lastdigit = a % 10;
if (lastdigit < 0)
{
lastdigit = lastdigit * -1;
}
putchar(lastdigit + '0');
return (lastdigit);
}

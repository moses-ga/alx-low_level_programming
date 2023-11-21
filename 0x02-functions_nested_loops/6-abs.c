#include "main.h"
/**
* _abs - function to computes the absplute valueof int
*@a: parameter
* Return: return n
*/

int _abs(int a)
{
if (a < 0)
{
int abs_val;

abs_val = a * -1;
return (abs_val);
}
return (a);
}



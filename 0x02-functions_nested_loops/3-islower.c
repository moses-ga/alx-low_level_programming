#include "main.h"
/**
* _islower - function that checks for lowercase latters
* @ch: Variable to be checked
* Return: 1 for lowercase or 0 for anuthing else
*/

int _islower(int ch)
{
if (ch >= 'a' && ch <= 'z')
{
return (1);
}
else
{
return (0);
}
}


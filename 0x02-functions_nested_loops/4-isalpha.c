#include "main.h"
/**
*_isalpha - function to checks for alphabetic character
*@ch: parameter
*Return: return 1 if ch is a letter 0 otherwise
*/

int _isalpha(int ch)
{
if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
{
return (1);
}
else
{
return (0);
}
}


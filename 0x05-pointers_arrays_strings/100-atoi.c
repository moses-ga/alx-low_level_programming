#include "main.h"
/**
 * _atoi - function that will converts a string to an integer;
 * @s: parameter to be converted
 *
 * Return: return n;
 */
int _atoi(char *s)
{
	int a, b, num, leng, c, dig;

a = 0;
b = 0;
num = 0;
leng = 0;
c = 0;
dig = 0;

while (s[leng] != '\0')
leng++;
while (a < leng && c == 0)
{
if (s[a] == '-')
++b;
if (s[a] >= '0' && s[a] <= '9')
{
dig = s[a] - '0';
if (b % 2)dig = -dig;

{
num = num * 10 + dig;
c = 1;
}
if (s[a + 1] < '0' || s[a + 1] > '9')
break;
c = 0;
}
a++;
}
if (c == 0)
return (0);
return (num);
}


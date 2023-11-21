#include "main.h"
/**
  * cap_string - Function that will capitalize words
  * @string: Parameter
  * Return: return string;
  */
char *cap_string(char *string)
{
	int c = 0;

	while (string[c])
	{
	while (!(string[c] >= 'a' && string[c] <= 'z'))
		c++;
	if (string[c - 1] == ' ' ||
	string[c - 1] == '\t' ||
	string[c - 1] == '\n' ||
	string[c - 1] == ',' ||
	string[c - 1] == ';' ||
	string[c - 1] == '.' ||
	string[c - 1] == '!' ||
	string[c - 1] == '?' ||
	string[c - 1] == '"' ||
	string[c - 1] == '(' ||
	string[c - 1] == ')' ||
	string[c - 1] == '{' ||
	string[c - 1] == '}' ||
	c == 0)
	string[c] -= 32;
	c++;
	}
	return (string);
}


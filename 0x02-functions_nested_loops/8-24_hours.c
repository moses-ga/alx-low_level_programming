#include "main.h"
#include <stdio.h>
/**
*jack_bauer - functions to print every minite of thr day
* Return: .
*/
void jack_bauer(void)
{
int hr, min;

for (hr = 0; hr < 24; hr++)
{
for (min = 0; min < 60; min++)
{
printf("%02d:%02d\n", hr, min);
}
}
}


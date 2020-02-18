#include "holberton.h"
/**
 * puts_half - puts half numbers
 * @str: string
 */
void puts_half(char *str)
{
int num, mid;
if (str != 0)
{
num = 0;
while (str[num] != '\0')
{
num++;
}
mid = num;
if (num > 1)
{
if ((num % 2) != 0)
{
num = (num + 1) / 2;	
}
else
{
num = num / 2;
}
for (; num < mid ; num++)
{
_putchar(str[num]);
}
}
}
_putchar('\n');
}

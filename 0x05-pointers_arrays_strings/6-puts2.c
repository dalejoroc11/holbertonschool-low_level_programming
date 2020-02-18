#include "holberton.h"
#include <stdio.h>
/**
 * puts2 - puts numbers
 * @str: string
 */
void puts2(char *str)
{
int num;
while (str[num] != '\0')
{
if ((num % 2) == 0)
{
_putchar(str[num]);
}
num++;
}
_putchar('\n');
}

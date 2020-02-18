#include "holberton.h"
#include <stdio.h>
/**
 * print_rev - print reverse
 * @s: string
 */
void print_rev(char *s)
{
int i = 0;
while (*(s + i) != '\0')
{
i++;/*array full*/
}
i = i - 1;
while (i >= 0)/*array rev*/
{
_putchar(*(s + i));
i--;
}
_putchar('\n');
}

#include "holberton.h"
/**
 * more:numbers - more
 */
void more_numbers(void)
{
int  a= 0;
int i, b, c;
while (a <= 9)
{
for (i = 0; i <= 14; i++)
{
b = i % 10;
c = i / 10;
if (i > 9)
{
_putchar(c + '0');
}
_putchar(b + '0');
}
a++;
_putchar('\n');
}
}

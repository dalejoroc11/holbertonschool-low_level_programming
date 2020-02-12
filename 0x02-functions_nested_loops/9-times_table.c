#include "holberton.h"
/**
 *times_table - value of an integer
 */
void times_table(void)
{
int n1 = 0, n2, n3 = n1, n4 = 0, n5;
while (n1 < 10)
{
_putchar(48);
for (n2 = 0; n2 < 9; n2++)
{
if (n3 < 10)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar('0' + n3);
}
else
{
n5 = n3 / 10;
n5 = n3 % 10;
_putchar(';');
_putchar(' ');
_putchar('0' + n4);
_putchar('0' + n5);
}
n3 = n3 + n1;
}
_putchar('\n');
n1++;
n3 = n1;
}
}

#include "holberton.h"
/**
 * print_square - print
 */
void print_square(int size)
{
int i1, i2;
if (size > 0)
{
for (i1 = 0; i1 < size; i1++)
{
for (i2 = 0; i2 < size; i2++)
{
_putchar('#');
}
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}

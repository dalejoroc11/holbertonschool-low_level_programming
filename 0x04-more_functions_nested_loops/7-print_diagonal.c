#include "holberton.h"
/**
 * print_diagonal - printdiag
 * @n: number
 */
void print_diagonal(int n)
{
int i, b;
if (n > 0)
{
for (i = 0; i < n; i++)
{
_putchar(92);
_putchar('\n');
if (i < (n - 1))
{
for (b = 0; b < (i + 1); b++)
{
_putchar(' ');
}
}
}
}
else
{
_putchar('\n');
}
}

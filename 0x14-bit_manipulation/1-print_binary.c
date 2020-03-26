#include "holberton.h"
/**
 * print_binary - print
 * @n: integer
 */
void print_binary(unsigned long int n)
{
if (n > 1)
{
print_binary(n >> 1);
}
if (n & 1)
{
putchar('1');
}
else
{
putchar('0');
}
}


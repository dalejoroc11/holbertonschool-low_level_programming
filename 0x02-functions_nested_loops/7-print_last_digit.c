#include "holberton.h"
/**
 * print_last_digit - value of an integer
 * @ld: last digit
 * Return: value of last digit
 */
int print_last_digit(int ld)
{
ld = ld % 10;
if (ld < 0)
{
ld = ld * -1;
}
_putchar('0' + ld);
return (ld);
}

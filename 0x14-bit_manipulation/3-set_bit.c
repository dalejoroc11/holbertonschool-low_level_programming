#include "holberton.h"
/**
 * set_bit - set bit
 * @n: int var
 * @index: bvar uns
 * Return: 0
 */
int set_bit(unsigned long int *n, unsigned int index)
{
if (index > 64)
{
return (-1);
}
else
{
*n = *n | (1 << index);
}
return (1);
}

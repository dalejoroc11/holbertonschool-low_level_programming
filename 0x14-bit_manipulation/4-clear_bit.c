#include "holberton.h"
/**
 * clear_bit - cleaar bit
 * @n: pointer
 * @idx: bits
 * Return: 0
 */
int clear_bit(unsigned long int *n, unsigned int idx)
{
if (idx > 64)
{
return (-1);
}
else
{
*n = *n & ~(1 << idx);
}
return (1);
}


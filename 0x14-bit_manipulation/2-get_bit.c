#include "holberton.h"
/**
 * get_bit - return val of bit
 * @index: given index int
 * @n: int
 * Return: -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
if (index > 64)
{
return (-1);
}
else
{
return ((n >> index) & 1);
}
}

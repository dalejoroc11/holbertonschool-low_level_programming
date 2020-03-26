#include "holberton.h"
/**
 * flip_bits - number of bits
 * @m: integer
 * @n: integer
 * Return: 0
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int num = 0, aux;
aux = n ^ m;
while (aux > 0)
{
if ((aux & 1) == 1)
num++;
aux = aux >> 1;
}
return (num);
}

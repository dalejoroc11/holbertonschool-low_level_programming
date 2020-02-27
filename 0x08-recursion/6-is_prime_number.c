#include "holberton.h"
/**
 * ipn - fun prime
 * @n: int
 * @x: int
 * Return: x
 */
int ipn(int n, int x)
{
if (x >= (n / 2))
{
return (1);
}
if (n % x == 0)
{
return (0);
x++;
x = ipn(n, x);
}
return (x);
}
/**
 * is_prime_number - fun prime num
 * @n: int
 * Return: ipn
 */
int is_prime_number(int n)
{
if (n <= 1)
{
return (0);
}
else
{
return (ipn(n, 2));
}
}

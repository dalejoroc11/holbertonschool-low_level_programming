#include "holberton.h"
/**
 * s - fun sqrt
 * @n: int
 * @x: int
 * Return: x
 */
int s(int n, int x)
{
if (x * x == n)

return (x);

if (x > (n / 2))

return (-1);
x++;
x = s(n, x);

return (x);
}
/**
 * _sqrt_recursion - fun sqrt
 * @n: int
 * Return: srt
 */
int _sqrt_recursion(int n)
{
if (n == 0 || n == 1)

return (n);

if (n < 0)

return (-1);

return (s(n, 2));
}

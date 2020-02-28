<<<<<<< HEAD
#include "holberton.h"
/**
 * factorial - fact of number
 * @n; number
 */
int factorial(int n)
{

=======
#include"holberton.h"
/**
 * factorial - fun factorial
 * @n: integer
 * Return: -1
 */
int factorial(int n)
{
if (n > 0)
{
return (n * factorial(n - 1));
}
else if (n == 0)
{
return (1);
}
else
{
return (-1);
}
>>>>>>> 7c027565bc55048b82e61b9f3ab924280c66a36d
}

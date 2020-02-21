#include "holberton.h"
/**
 * reverse_array - two strings.
 * @a: The first
 * @n: The string
 * Return: int
 */
void reverse_array(int *a, int n)
{
int b;
int c = 0;
int d = n - 1;
for (b = 0; b < n / 2; b++)
{
c = a[d];
a[d] = a[b];
a[b] = c;
d--;
}
}

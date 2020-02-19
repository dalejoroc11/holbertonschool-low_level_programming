#include "holberton.h"
#include <stdio.h>
/**
 * print_array - print diff numbers
 * @a: nmber
 * @n: number
 */
void print_array(int *a, int n)
{
int i;
for (i = 0; i < n; i++)
{
if ((i + 1) == n)
{
printf("%d", a[i]);
}
else
{
printf("%d, ", a[i]);
}
}
printf("\n");
}

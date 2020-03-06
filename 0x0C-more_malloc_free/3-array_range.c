#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - create array
 * @min: var min
 * @max: var max
 * Return: sucess
 */
int *array_range(int min, int max)
{
int *p;
int i = 0, j = 0;
if (min > max)
return ('\0');
i = max - min + 1;
p = malloc(sizeof(int) * i);
if (!p)
return ('\0');
while (min != max)
{
p[j] = min;
j++;
min++;
}
p[j] = max;
return (p);
}

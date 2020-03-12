#include <stdlib.h>
/**
 * int_index - entry point
 * @array: int
 * @size: int
 * @cmp: int
 *
 * Return: 0, -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i = 0;
if (array == NULL || cmp == NULL)
return (-1);
if (size <= 0)
return (-1);
while (i < size)
{
if ((*cmp)(array[i]) != 0)
return (i);
i++;
}
return (-1);
}

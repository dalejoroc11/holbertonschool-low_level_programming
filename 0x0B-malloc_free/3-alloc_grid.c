#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"
/**
 * alloc_grid - prints grid
 * @width: var
 * @height: var
 * Return: A
 */
int **alloc_grid(int width, int height)
{
int **A;
int i, j;
if (width <= 0 || height <= 0)
return (NULL);
A = malloc(sizeof(int *) * height);
if (A == (NULL))
return (NULL);
for (i = 0; i < height; i++)
{
A[i] = malloc(sizeof(int) * width);
if (A[i] == NULL)
{
for (j = 0; j < i; j++)
free(A[j]);
free(A);
}
}
for (i = 0; i < height; i++)
for (j = 0; j < width; j++)
A[i][j] = 0;
return (A);
}


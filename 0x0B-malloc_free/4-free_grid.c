#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"
/**
 * free_grid - prints a grid
 * @grid: variable
 * @height: var
 * Return: ar or NULL
 */
void free_grid(int **grid, int height)
{
int i;
for (i = 0; i < height; i++)
free(grid[i]);
free(grid);
}

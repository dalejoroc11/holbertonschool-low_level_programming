#include <stdlib.h>
#include "holberton.h"
#include <stdio.h>
/**
 * create_array - create array
 * @size: size char
 * @c: char
 * Return: pointer
 */
char *create_array(unsigned int size, char c)
{
char *A;
unsigned int i;
if (size == 0)
{
return ('\0');
}
A = malloc(size);
if (A == '\0')
{
return ('\0');
}
for (i = 0; i < size; i++)
{
A[i] = c;
}
return (A);
}

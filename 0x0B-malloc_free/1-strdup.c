#include <stdlib.h>
#include "holberton.h"
#include <stdio.h>
/**
 * _strdup - create array with string
 * @str: pointer with string
 * Return: pointer
 */
char *_strdup(char *str)
{
int i = 0;
int j;
char *A;
if (str == '\0')
return ('\0');
while (str[i])
i++;
A = malloc(sizeof(char) * (i + 1));
if (A == '\0')
return ('\0');
for (j = 0; j <= i; j++)
{
A[j] = str[j];
}
return (A);
}

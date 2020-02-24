#include "holberton.h"
#include <stdio.h>
/**
 * *_memset - fill memory
 * @b: char hexam to print
 * @n: number of prints
 * @s: memory buffer
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
s[i] = b;
}
return (s);
}

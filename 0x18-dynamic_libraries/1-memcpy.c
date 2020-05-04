#include "holberton.h"
#include <stdio.h>
/**
 * *_memcpy - copies memo area
 * @src: memory area
 * @dest: destino
 * @n: number of
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
dest[i] = src[i];
}
return (dest);
}

#include "holberton.h"
#include <stdio.h>
/**
 * *_strcpy - copu string
 * @dest: destinjo
 * @src: array
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
int i, j;
i = 0;
while (src[i] != '\0')
{
i++;
}
for (j = 0; j <= i; j++)
{
dest[j] = src[j];
}
return (dest);
}

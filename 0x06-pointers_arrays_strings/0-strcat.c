#include "holberton.h"
/**
 * *_strcat - concat two strings.
 * @dest: The first
 * @src: salida.
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
int a = 0;
int b = 0;
while (dest[a] != '\0')
{
a++;
}
while (src[b] != '\0')
{
dest[a] = src[b];
a++;
b++;
}
return (dest);
}

#include "holberton.h"
/**
 * *_strncat - concat two strings.
 * @dest: The first
 * @src: The str
 * @n: the number
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
int b = 0;
int a = 0;
int c = 0;
while (dest[a] != '\0')
{
a++;
}
while (src[c] != '\0')
{
c++;
}
while (b < n && b < c)
{
dest[a] = src[b];
a++;
b++;
}
return (dest);
}

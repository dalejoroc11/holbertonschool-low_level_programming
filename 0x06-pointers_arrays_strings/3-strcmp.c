#include "holberton.h"
/**
 * _strcmp - two strings.
 * @s1: string
 * @s2: concatenates
 * Return: int
 */
int _strcmp(char *s1, char *s2)
{
int b = 0;
int a = 0;
int c = 0;
int d = 0;
while (s1[a] != '\0' && s2[a] != '\0' && b == 0)
{
if (s2[a] != s1[a])
{
c = s1[a];
d = s2[a];
b++;
}
a++;
}
if (b == 0)
{
c = s1[a];
d = s2[a];
}
return (c - d);
}


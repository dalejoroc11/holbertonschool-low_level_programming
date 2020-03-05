#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - fun concat two str
 * @s1: string 2
 * @s2: string 1
 * @n: int
 * Return: sucess
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *p;
unsigned int c1 = 0, c2;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
while (s1[c1])
c1++;
p = malloc(n + c1 + 1);
if (p == NULL)
return (NULL);
c2 = 0;
while (c2 < c1)
{
p[c2] = s1[c2];
c2++;
}
c1 = 0;
while (c1 < n && s2[c1] != '\0')
{
p[c2] = s2[c1];
c2++, c1++;
}
p[c2] = '\0';
return (p);
}

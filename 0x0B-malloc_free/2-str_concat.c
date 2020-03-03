#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"
/**
 * str_concat - concat 2 strings
 * @s1: var char
 * @s2: var char
 *
 * Return: ar or null
 */
char *str_concat(char *s1, char *s2)
{
int t1 = 0;
int t2 = 0;
int i = 0;
int j = 0;
char *A;
if (s1 == '\0')
s1 = "";
if (s2 == '\0')
s2 = "";
while (s1[t1])
t1++;
while (s2[t2])
t2++;
A = malloc(t1 + t2 + 1);
if (A == '\0')
return ('\0');
while (i < t1)
{
A[i] = s1[i];
i++;
}
while (i <= t2 + t1)
{
A[i] = s2[j];
i++;
j++;
}
return (A);
}


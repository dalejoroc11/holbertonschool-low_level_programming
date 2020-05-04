#include "holberton.h"
/**
 * *_strpbrk -  fun searches a strig
 * @s: char
 * @accept: bytes
 * Return: accept
 */
char *_strpbrk(char *s, char *accept)
{
int i = 0, j = 0;
while (s[i])
{
j = 0;
while (accept[j])
{
if (s[i] == accept[j])
{
s = (s + i);
return (s);
}
j++;
}
i++;
}
s = 0;
return (s);
}

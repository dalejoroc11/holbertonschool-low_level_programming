#include "holberton.h"
/**
 * _strspn - gets lenght
 * @s: char pointer
 * @accept: bytes
 * Return: bytes
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int a = 0, b = 0, c = 1, d = 0;
while (s[a] != '\0' && c != 0)
{
b = 0;
while (accept[b] != '\0' && c == 1)
{
if (s[a] == accept[b])
{
d++;
c = 2;
}
else
{
c = 1;
}
b++;
}
if (c == 2)
c = 1;
else
c = 0;
a++;
}
return (d);
}

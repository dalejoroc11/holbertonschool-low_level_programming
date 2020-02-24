#include "holberton.h"
/**
 * *string_toupper - two strings.
 * @c: char val
 * Return: int
 */
char *string_toupper(char *c)
{
int b;
int a = 0;
while (c[a] != '\0')
{
a++;
}
for (b = 0; b < a; b++)
{
if (c[b] >= 97 && c[b] <= 122)
{
c[b] = (c[b] - 32);
}
}
return (c);
}

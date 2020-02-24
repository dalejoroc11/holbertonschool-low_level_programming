#include "holberton.h"
#include <string.h>
/**
 * *_strchr - localice a char
 * @s: string
 * @c: char
 * Return: s, null
 */
char *_strchr(char *s, char c)
{
int i;
for (i = 0; s[i] != '\0'; i++)
{
if (s[i] == c)
{
s = &s[i];
return (s);
}
}
return (0);
}

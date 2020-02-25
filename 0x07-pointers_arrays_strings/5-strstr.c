#include "holberton.h"
/**
 * _strstr - Entry point
 * @hk: char variable
 * @ne: char variable
 *
 * Return: dest
 */
char *_strstr(char *hk, char *ne)
{
int a = 0;
int b;
int j = 0;
int i;
while (ne[j])
j++;
if (j == 0)
return (hk);
while (hk[a])
{
if (hk[a] == ne[b])
{
i++;
if (i == j)
{
hk = hk + a - j + 1;
return (hk);
}
b++;
}
else
{
b = 0;
i = 0;
}
a++;
}
hk = 0;
return (hk);
}

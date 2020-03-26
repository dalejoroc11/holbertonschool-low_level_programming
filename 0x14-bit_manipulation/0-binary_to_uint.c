#include "holberton.h"
/**
 * binary_to_uint - convert binary number to unint
 * @b: char pointer
 * Return: unint
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int num = 0;
int i = 0;
int p = 2;
if (b == NULL)
{
return (0);
}
while (b[i] != '\0')
{
if (b[i] != 48 && b[i] != 49)
{
return (0);
}
i++;
}

i--;

if (b[i] == 49)
{
num = 1;
i--;
}
while (i >= 0)
{
num = num + (p * (b[i] - 48));
i--;
p += p;
}
return (num);
}

#include "holberton.h"
/**
 * _isalpha - _isalpha
 * @c: integr
 * Return: 1,0
 */
int _isalpha(int c)
{
if (c >= 65 && c <= 90)
{
return (1);
}
if (c >= 97 && c <= 122)
{
return (1);
}
else
{
return (0);
}
}

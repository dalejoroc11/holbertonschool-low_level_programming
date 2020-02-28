#include "holberton.h"
/**
 * _strlen_recursion - return length string
 * @s: string
 * Return: cont
 */
int _strlen_recursion(char *s)
{
int cont = 0;
if (*s)
{
cont = cont + 1;
return (cont + _strlen_recursion(++s));
}
else
{
return (0);
}
}


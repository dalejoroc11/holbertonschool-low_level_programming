#include "holberton.h"
/**
 * _strlen_recursion - return length string
 * @s: string
 * Return: cont
 */
int _strlen_recursion(char *s)
{
static int cont = 0;
if (*s != '\0')
{
cont = cont + 1;
_strlen_recursion(++s);
}
return (cont);
}

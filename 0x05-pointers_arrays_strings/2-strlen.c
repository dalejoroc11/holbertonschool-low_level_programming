#include "holberton.h"
#include <stdio.h>
/**
 * _strlen - give the lenght
 * @s: char s
 * Return: return lenght string
*/
int _strlen(char *s)
{
int len = 0;
while (*s != '\0')
{
len++;/*counter worlds*/
s++;/*itera dentro de array pointer*/
}
return (len);
}

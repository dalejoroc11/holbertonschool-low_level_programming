#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _calloc - mem asign
 * @nmemb : men
 * @size: size l
 * Return: sucess
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *p;
unsigned int i = 0;
if (nmemb == 0 || size == 0)
return ('\0');
p = malloc(nmemb * size);
if (p == '\0')
return ('\0');
for (i = 0; i < (nmemb * size); i++)
{
p[i] = 0;
}
return (p);
}

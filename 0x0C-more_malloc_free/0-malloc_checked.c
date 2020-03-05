#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - alloc mem malloc
 * @b
 * Return: sucess
 */
void *malloc_checked(unsigned int b)
{
int *p;
p = NULL;
p = malloc(b);
if (p == NULL)
{
exit (98);
}
return (p);
}

#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _realloc - fun
 * @new_size: var
 * @old_size: var
 * @ptr: pointer
 * Return: sucess
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
char *p;
unsigned int i = 0;
if (new_size == old_size)
return (ptr);
if (new_size == 0 && ptr)
{
free(ptr);
return ('\0');
}
if (!ptr)
{
p = malloc(new_size);
if (!p)
return ('\0');
return (p);
}
p = malloc(new_size);
if (p == '\0')
return ('\0');
while (i < old_size && i < new_size)
{
p[i] = ((char *)ptr)[i];
i++;
}
free(ptr);
return (p);
}

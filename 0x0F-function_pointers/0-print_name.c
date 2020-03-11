#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - fun print name
 * @name: var name
 * @*: fun pointer
 * @f: fun pointer
 */
void print_name(char *name, void (*f)(char *))
{
if (name == '\0' || f == '\0')
{
return;
}
f(name);
}



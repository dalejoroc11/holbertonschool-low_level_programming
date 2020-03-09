#include "dog.h"
#include <stdio.h>
/**
 *print_dog - function that prints struct
 *@d: struct dog
 */
void print_dog(struct dog *d)
{
if (d)
{
char *dname = (d->name);
char *downer = (d->owner);
if (!dname)
dname = "(nil)";
if (!downer)
downer = "(nil)";
printf("Name: %s\nAge: %f\nOwner: %s\n", dname, d->age, downer);
}
}

#include <stdio.h>
#include "dog.h"
/**
 * init_dog - init var
 * @d: struct
 * @name: name var
 * @age: float var
 * @owner: owner var
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d != NULL)
{
d -> name = name;
d -> age = age;
d -> owner = owner;
}
}

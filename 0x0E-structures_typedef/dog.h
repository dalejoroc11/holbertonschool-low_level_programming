#ifndef HOLBERTON_H
#define HOLBERTON_H
/**
 * struct dog - structure
 * @name: name var
 * @age: age var
 * @owner: owner
 */
struct dog
{
char *name;
float age;
char *owner;
};

int _putchar(char c);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif

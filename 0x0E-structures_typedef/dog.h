#ifndef HOLBERTON_H
#define HOLBERTON_H
struct dog
{
char *name;
float age;
char *owner;
};


int _putchar(char c);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
/*dog_t *new_dog(char *name, float age, char *owner);*/
/*id free_dog(dog_t *d);*/
#endif

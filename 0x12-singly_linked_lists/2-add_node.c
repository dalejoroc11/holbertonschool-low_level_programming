#include "lists.h"
/**
 * add_node - addnode
 * @head: pointer
 * @str: point
 * Return: list
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *add;
int i = 0;
add = malloc(sizeof(list_t));
if (add == '\0')
{
return ('\0');
}
add[0].str = strdup(str);
add[0].next = *head;
*head = add;
while (str[i])
{
i++;
}
add[0].len = i;
return (add);
}


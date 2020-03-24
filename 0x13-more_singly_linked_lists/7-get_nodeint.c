#include "lists.h"
/**
 * get_nodeint_at_index - node of the list
 * @head: pointer
 * @index: int
 * Return: Always 0.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);
{
unsigned int i = 0;
listint_t *node;
node = malloc(sizeof(listint_t));
if (node == NULL)
{
return (NULL);
}
while (head)
{
if (i == index)
{
node = head;
return (node);
}
head = head->next;
i++;
}
return (NULL);
}

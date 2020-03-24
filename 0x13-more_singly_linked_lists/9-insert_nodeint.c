#include "lists.h"
/**
 * insert_nodeint_at_index- insert node
 * @head: pointer head
 * @idx: node add
 * @n: int
 * Return: numnodes
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int i = 1;
listint_t *new;
listint_t *aux = *head;
new = malloc(sizeof(listint_t));
if (new == NULL)
return (NULL);
new->n = n;
if (idx == 0)
{
new->next = aux;
*head = new;
return (new);
}
while (aux)
{
if (i == idx)
{
new->next = (aux)->next;
aux->next = new;
return (new);
}
i++;
aux = aux->next;
}
return (NULL);
}

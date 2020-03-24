#include "lists.h"
/**
 * add_nodeint_end - add node end
 * @head: pointer
 * @n: int
 * Return: Always 0.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new, *endlist = *head;
new = malloc(sizeof(listint_t));
if (new == NULL)
{
return (NULL);
}
new[0].n = n;
new[0].next = NULL;
if (*head == NULL)
{
*head = new;
return (new);
}
while (endlist[0].next != NULL)
{
endlist = endlist[0].next;
}
endlist[0].next = new;
return (new);
}

#include "lists.h"
/**
 * add_nodeint - add node int in head
 * @head: pointer
 * @n: integer
 * Return: new node in head.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new;
new = malloc(sizeof(listint_t));
if (new == NULL)
{
return (NULL);
}
new[0].n = n;
new[0].next = *head;
*head = new;
return (new);
}

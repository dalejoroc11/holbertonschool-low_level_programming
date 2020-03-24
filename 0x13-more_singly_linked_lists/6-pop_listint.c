#include "lists.h"
/**
 * pop_listint - delete head node
 * @head: pointer
 * Return: Always 0.
 */
int pop_listint(listint_t **head)
{
int vinlis = 0;
listint_t *link = *head;
if (link == NULL)
{
vinlis = 0;
}
else
{
vinlis = (*head[0]).n;
*head = link[0].next;
free(link);
}
return (vinlis);
}


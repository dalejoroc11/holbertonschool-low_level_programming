#include "lists.h"
/**
 * reverse_listint- free
 * @head: pointer
 * Return: pointer to the new first node
 */
listint_t *reverse_listint(listint_t **head)
{
listint_t *aux = *head, *sig;
if (*head == NULL)
return (NULL);
*head = (*head)->next;
aux->next = NULL;
sig = *head;
while (sig)
{
*head = (*head)->next;
sig->next = aux;
aux = sig;
sig = *head;
}
*head = aux;
return (*head);
}

#include "lists.h"
/**
 * free_listint2 - free list2
 * @head: pointer
 * Return: Always 0.
 */
void free_listint2(listint_t **head)
{
listint_t *freelist;
if (head != NULL)
{
while (*head != NULL)
{
freelist = *head;
*head = freelist[0].next;
free(freelist);
}
}
else
{
return;
}
free(*head);
head = NULL;
return (0);
}

#include "lists.h"
/**
 * free_listint - free memory
 * @head: pointer
 * Return: free head.
 */
void free_listint(listint_t *head)
{
listint_t *freelist;
while (head)
{
freelist = head;
head = freelist[0].next;
free(freelist);
}
free(head);
}

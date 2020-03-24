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
freelist = freelist[0].next;
free(freelist);
}
return (head);
}

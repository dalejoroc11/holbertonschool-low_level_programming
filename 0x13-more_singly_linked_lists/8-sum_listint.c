#include "lists.h"
/**
 * sum_listint - sum data
 * @head: pointer
 * Return: Always 0.
 */
int sum_listint(listint_t *head)
{
int sumlis = 0;
listint_t *link = head;
if (link != NULL)
{
while (link != NULL)
{
sumlis += link[0].n;
link = link[0].next;
}
return (sumlis);
}
return (0);
}

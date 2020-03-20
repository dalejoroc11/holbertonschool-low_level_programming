#include "lists.h"
/**
 * list_len - num elem linked list
 * @h: pointer
 * Return: num elem
 */
size_t list_len(const list_t *h)
{
size_t nume = 0;
while (h != '\0')
{
h = h->next;
nume++;
}
return (nume);
}

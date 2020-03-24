#include "lists.h"
/**
 * listint_len - print number of elem of list
 * @h: pointer
 * Return: Always 0.
 */
size_t listint_len(const listint_t *h)
{
int len = 0;
while (h != NULL)
{
h = h[0].next;
len++;
}
return (len);
}

#include "lists.h"
/**
 * print_list - linked list print
 * @h: pointer header
 * Return: num nodes
 */
size_t print_list(const list_t *h)
{
size_t numn = 0;
while (h != '\0')
{
if (h->str == '\0')
{
printf("[0] (nil)\n");
}
else
{
printf("[%d] %s\n", h->len, h->str);
}
numn++;
h = h->next;
}
return (numn);
}

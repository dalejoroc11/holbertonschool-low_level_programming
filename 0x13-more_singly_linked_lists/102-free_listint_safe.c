#include "lists.h"
/**
 * free_listint_safe- free memory
 * @h: pointer
 * Return: free nodes
 */
size_t free_listint_safe(listint_t **h)
{
size_t nod = 0;
listint_t *before, *aux = *h;
if (h == NULL)
return (0);
while (aux)
{
nod++;
if ((aux->next) >= aux)
{
return (nod);
}
before = aux;
aux = aux->next;
free(before);
}
*h = NULL;
return (nod);
}

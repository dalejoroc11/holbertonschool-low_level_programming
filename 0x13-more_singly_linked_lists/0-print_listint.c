#include "lists.h"
/**
 * print_listint - print list 
 * @h: pointer head 
 * Return: Always 0.
 */
size_t print_listint(const listint_t *h)
{
int len;
lent = 0;
while (h != NULL)
{
printf("%d\n", h[0].n);/*print format call structure*/
h = h[0].next;/*cross for the next*/
len++;
}
return (len);
}

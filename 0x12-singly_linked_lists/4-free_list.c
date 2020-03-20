#include "lists.h"
/**
 * free_list - clean list
 * @head: head
 */
void free_list(list_t *head)
{
list_t *element;
while (head)
{
element = head;
free(head->str);
free(head);
head = element->next;
}
free(head);
}

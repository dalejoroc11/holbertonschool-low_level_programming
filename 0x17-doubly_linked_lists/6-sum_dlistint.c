#include "lists.h"
/**
 * sum_dlistint - sum data
 * @head: header
 * Return: sum data
 */
int sum_dlistint(dlistint_t *head)
{
  int res = 0;
  while (head)
    {
      res += head->n;
      head = head->next;
    }
  return (res);
}

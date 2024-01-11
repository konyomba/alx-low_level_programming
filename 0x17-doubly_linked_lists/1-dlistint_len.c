#include "lists.h"
  
/**
 * print_dlistint - prints elements
 * @h: head of a list
 * Return: nodes number
 */
size_t dlistint_len(const dlistint_t *h)
{
	int count;

	count = 0;

	if (h == NULL)
		return (count);

        while (h->prev != NULL)
                h = h->prev;

        while (h != NULL)
        {
                count++;
                h = h->next;
        }

        return (count);
}

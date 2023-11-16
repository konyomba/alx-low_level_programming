#include "lists.h"

/**
 * list_len - returns number of elements in a list
 * @h: list
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	size_t range = 0;

	while (h)
	{
		h = h->next;
		range++;
	}
	return (range);
}

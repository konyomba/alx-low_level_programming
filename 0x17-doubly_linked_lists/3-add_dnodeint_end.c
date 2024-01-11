#include "lists.h"

/**
 * add_dnodeint_end - adds a node at the end
 * @head: head
 * @n: value of element
 * Return: address of element
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *h;
	dlistint_t *mem;

	mem = malloc(sizeof(dlistint_t));
	if (mem == NULL)
		return (NULL);

	mem->n = n;
	mem->next = NULL;

	h = *head;

	if (h != NULL)
	{
		while (h->next != NULL)
			h = h->next;
		h->next = mem;
	}
	else
	{
		*head = mem;
	}

	mem->prev = h;

	return (mem);
}

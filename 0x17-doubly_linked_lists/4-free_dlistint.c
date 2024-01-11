#include "lists.h"

/**
 * free_dlistint - frees list
 * @head: head
 * Return: nothing
 */
void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
		return;

	while (head->next)
	{
		head = head->next;
		free(head->next);
	}
	free(head);
}

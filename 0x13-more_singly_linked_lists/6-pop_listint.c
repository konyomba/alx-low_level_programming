#include "lists.h"

/**
 * pop_listint - deletes the head node
 * @head: pointer to the first element
 * Return: 0 if the linked list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int result;

	if (!head || !*head)
		return (0);

	result = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (result);
}

#include "lists.h"

/**
 * get_nodeint_at_index - return  the nth node of a listint_t
 * @head: pointer to first element
 * @index: index of a node
 * Return: NULL if the node does not exist else pointer to the node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}
	return (temp ? temp : NULL);
}

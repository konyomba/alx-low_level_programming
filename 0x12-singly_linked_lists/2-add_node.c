#include "lists.h"

/**
 * add_node - adds node
 * @head: points to original list
 * @str: string to be added
 * Return: address or NULL if fail
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;
	int range = 0;

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);

	while (str[range])
		range++;

	temp->len = range;
	temp->str = strdup(str);
	temp->next = *head;
	*head = temp;
	return (temp);
}

#include "lists.h"

/**
 * delete_nodeint_at_index - function that deletes the node at
 * index index of a listint_t linked list
 * @head: points to the head in the list
 * @index: index of the node to delete
 *
 * Return: 1 if success or -1 if fail
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *c_node = *head;
	listint_t *n_node = NULL;
	unsigned int nn = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(c_node);
		return (1);
	}

	while (nn < index - 1)
	{
		if (!c_node || !(c_node->next))
			return (-1);
		c_node = c_node->next;
		nn++;
	}

	n_node = n_node->next;
	n_node->next = n_node->next;
	free(n_node);

	return (1);
}

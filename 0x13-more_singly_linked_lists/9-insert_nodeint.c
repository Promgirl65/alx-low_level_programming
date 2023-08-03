#include "lists.h"

/**
 * insert_nodeint_at_index - function that inserts a new node
 * at a given position
 * @head: points to the first node in the list
 * @idx: index of the new node where new node is added
 * @n: data to insert in the new node
 *
 * Return: address of the new node or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int nn;
	listint_t *new_node;
	listint_t *c_node = *head;

	new_node = malloc(sizeof(listint_t));
	if (!new_node || !head)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	for (nn = 0; c_node && nn < idx; nn++)
	{
		if (nn == idx - 1)
		{
			new_node->next = c_node->next;
			c_node->next = new_node;
			return (new_node);
		}
		else
			c_node = c_node->next;
	}

	return (NULL);
}

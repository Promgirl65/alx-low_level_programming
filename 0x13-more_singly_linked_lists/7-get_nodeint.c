#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: points to the head of the listint_t list
 * @index: index of the node to locate - indices start at 0.
 *
 * Return: nth node or NULL if the node does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int c_node;

	for (c_node = 0; c_node < index; c_node++)

	{
		if (head == NULL)
			return (NULL);

		head = head->next;
	}

	return (head);
}

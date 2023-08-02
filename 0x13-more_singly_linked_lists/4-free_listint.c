#include "lists.h"

/**
 * free_listint - function frees a listint_t list
 * @head: listint_t list to be freed
 *
 */
void free_listint(listint_t *head)
{
	listint_t *c_node;

	while (head != NULL)
	{
		c_node = head;
		head = head->next;
		free(c_node);
	}
}

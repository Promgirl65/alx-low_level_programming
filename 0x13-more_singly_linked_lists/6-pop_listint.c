#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: points to the first element in the linked list
 *
 * Return:  head node data (n)
 * if the linked list is empty return 0
 */

int pop_listint(listint_t **head)
{
	listint_t *c_node;
	int dat;

		if (head == NULL || *head == NULL)
			return (0);

	dat = (*head)->n;
	c_node = (*head)->next;
	free(*head);
	*head = c_node;

	return (dat);
}


#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: points to the first element in the list
 * @n: data to insert in the new element
 *
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_Node;
	listint_t *temp = *head ;

	new_Node = malloc(sizeof(listint_t));
	if (!new_Node)
		return (NULL);

	new_Node->n = n;
	new_Node->next = NULL;

	if (*head == NULL)
	{
		*head = new_Node;
		return (new_Node);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = new_Node;


	return (new_Node);
}

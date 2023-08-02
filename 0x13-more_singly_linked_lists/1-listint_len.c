#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: linked list of listint_t
 *
 * Return: the number of nodes
 *
 */

size_t print_listint(const listint_t *h)
{
	size_t nn = 0;
	
	while (h != NULL)
	{
		nn++;
		h = h->next;
	}
	
	return (nn);
}

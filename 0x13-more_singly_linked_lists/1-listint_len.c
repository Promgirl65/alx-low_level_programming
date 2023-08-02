#include "lists.h"

/**
 * listint_len - returns the number of elements
 * of a linked listint_t list
 * @h: linked list of listint_t
 *
 * Return: the number of nodes
 *
 */

size_t listint_len(const listint_t *h)
{
	size_t nn = 0;

	while (h != NULL)
	{
		nn++;
		h = h->next;
	}

	return (nn);
}

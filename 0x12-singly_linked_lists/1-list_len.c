#include <stdlib.h>
#include "lists.h"

/**
 * list_len: returns the number of elements in a linked list
 * @h: pointer to the list_t list
 *
 * Return: num_elem
 */
size_t list_len(const list_t *h)
{
	size_t num_elem = 0;

	while (h)
	{
		num_elem++;
		h = h->next;
	}
	return (num_elem);
}

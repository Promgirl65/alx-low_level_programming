#include "lists.h"

/**
 * sum_listint -function that returns the sum
 * of all the data (n) of a listint_t linked list
 * @head: points to the head of the listint_t list
 *
 * Return: sum or 0 if the list is empty
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}

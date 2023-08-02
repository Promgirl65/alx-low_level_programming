#include "lists.h"

/**
 * free_listint2 - function that frees a listint_t list
 * @head: the listint_t list to be freed
 *
 */

void free_listint2(listint_t **head)
{
    listint_t *c_node;

    if (head == NULL || *head == NULL)
        return;

    while (*head != NULL)
    {
        c_node = *head;
        *head = (*head)->next;
        free(c_node);
    }

    *head = NULL;
}

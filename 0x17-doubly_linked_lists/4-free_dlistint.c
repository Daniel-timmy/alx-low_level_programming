#include "lists.h"
/**
 * free_dlistint - frees a dlistint_t list.
 *
 * @head: pointer to list
 *
 * Return: NULL.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;

	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;
	}

	current = head;
	while (current != NULL)
	{
		free(current);
		head = head->next;
		current = head;
	}
}

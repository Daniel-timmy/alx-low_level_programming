#include "lists.h"
/**
 * reverse_listint - reverses a listint_t linked list.
 *
 * @head: head of the linked lists.
 *
 * Return: returns a pointer
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *current = *head;
	listint_t *prev = NULL;
	listint_t *next = NULL;

	while (current != NULL)
	{
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}
	*head = prev;
	return (*head);
}

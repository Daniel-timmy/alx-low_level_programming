#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a list
 * @head: head of the linked list
 * @n: data to be added
 *
 * Return: returns a pointer
 *
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp = malloc(sizeof(listint_t));

	if (temp == NULL)
		return (NULL);

	temp->n = n;
	temp->next = *head;

	*head = temp;

	return (*head);
}

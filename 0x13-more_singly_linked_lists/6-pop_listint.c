#include "lists.h"
/**
 * pop_listint - deletes the head node of a listint_t linked list
 *
 * @head: pointer to the linked list
 *
 * Return: returns the head node’s data (n).
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int d;

	if (*head == NULL)
		return (0);
	temp = *head;
	
	d = temp->n;
	*head = (*head)->next;
	free(temp);

	return (d);
}
	

#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list.
 *
 * @head: head of the list
 * @n: data to be adde
 *
 * Return: returns the address of the new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));
	listint_t *temp;

	new->n = n;
	new->next = NULL;

	if (new == NULL)
		return (NULL);

	temp = *head;
	if (*head == NULL)
		*head = new;
	else 
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
		}	
	temp->next = new;
	}

	return (*head);
}

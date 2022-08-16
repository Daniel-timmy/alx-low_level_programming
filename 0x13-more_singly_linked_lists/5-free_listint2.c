#include "lists.h"
/**
 * free_listint2 - frees a listint_t list.
 *
 * @head: linked list
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head != NULL)
	{
		temp = *head;

		while (*head)
		{
			*head = (*head)->next;
			free(temp);
			temp = *head;
		}
		*head = NULL;
	}
}

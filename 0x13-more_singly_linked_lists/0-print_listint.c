#include "lists.h"

/**
 * print_listint -  prints all the elements of a listint_t list.
 * @node: the list to be printed
 *
 * Return: returns the number of nodes.
 *
 */
size_t print_listint(const listint_t *node)
{
	size_t nnodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		nnodes++;
	}
	return (nnodes);
}

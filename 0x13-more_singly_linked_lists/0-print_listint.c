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
	unsigned int count = 0;

	if (node == NULL)
		return (0);

	while (node != NULL)
	{
		count++;
		printf("%d\n", node->n);
		node = node->next;
	}
	return (count);
}

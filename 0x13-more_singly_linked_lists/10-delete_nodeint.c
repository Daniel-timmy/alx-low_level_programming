#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at index
 * index of a listint_t linked list.
 *
 * @head: linked list
 *
 * @index: node to be deleted
 *
 * Return: returns 1 upon success
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	listint_t *prev;

	if  (temp == 

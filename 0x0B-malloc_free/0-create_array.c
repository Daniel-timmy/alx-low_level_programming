#include "main.h"
#include <stdlib.h>
/**
 * create_array -  creates an array of
 * chars, and initializes it with a specific char.
 * @size: size of array to be created
 * @c: the intialiazing character
 * Return: returns NULL if the size equals 0,
 * returns a pointer to the string otherwise
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	if (size == 0)
		return (NULL);
	ptr = malloc(size * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}
	return (ptr);
}

#include "dog.h7"
#include <stdio.h>
/**
 * free_dog - a function that frees dogs
 * @d: struct dog
 *
 * Return: no return
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->age);
		free(d->owner);
		free(d);
	}
}

#include "dog.h"
/**
 * init_dog - initialize a variable of type struct dog
 * @d: instance of struct dog
 * @age: float variable age
 * @name: name of dog
 * @owner: name of owner
 *
 * Return: returns void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

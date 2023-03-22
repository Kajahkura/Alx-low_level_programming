#include <dog.h>

/**
 * innit_dog - innitialize a structure of type dog
 *
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner);
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

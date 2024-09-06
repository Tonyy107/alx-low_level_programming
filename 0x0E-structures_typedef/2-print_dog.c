#include <stdio.h>
#include "dog.h"
/**
 * print_dog - prints a struct dog
 * @d: pointer to structure
 *
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		if (d->name != NULL)
		{
			printf("Name: %s\n", d->name);
		}
		else if (d->name == NULL)
		{
			printf("Name: %s\n", "(nil)");
		}
		printf("Age: %f\n", d->age);
		if (d->owner != NULL)
		{
			printf("Owner: %s\n", d->owner);
		}
		else if (d->owner == NULL)
		{
			printf("Owner: %s\n", "(nil)");
		}
	}
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: pointer to new dog, or NULL if it fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog = (dog_t *)malloc(sizeof(dog_t));

	if (dog == NULL)
	{
		printf("Memory allocation for dog structure failed\n");
		return (NULL);
	}

	dog->name = strdup(name);
	if (dog->name == NULL)
	{
		printf("Memory allocation for name failed\n");
		free(dog);
		return (NULL);
	}

	dog->owner = strdup(owner);
	if (dog->owner == NULL)
	{
		printf("Memory allocation for owner failed\n");
		free(dog->name);
		free(dog);
		return (NULL);
	}

	dog->age = age;

	return (dog);
}

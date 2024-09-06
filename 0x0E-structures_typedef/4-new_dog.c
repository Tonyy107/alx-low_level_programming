#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: pointer to new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
    dog_t *dog = (dog_t *)malloc(sizeof(dog_t));
    dog->name = name;
    dog->age = age;
    dog->owner = owner;
    return dog;
}
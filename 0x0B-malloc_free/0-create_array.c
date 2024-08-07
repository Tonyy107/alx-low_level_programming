#include "main.h"
#include <stdlib.h>

/**
 * create_array - Creates an array of characters and
 * initializes it with a specific character
 * @size: The size of the array to be created
 * @c: The character to initialize the array with
 *
 * Return: If size is 0 or if memory allocation fails, returns NULL.
 *         Otherwise, returns a pointer to the newly created array.
 */
char *create_array(unsigned int size, char c)
{
	char *arr = (char *)malloc(size * sizeof(char));
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	else if (arr == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			arr[i] = c;
		}
		return (arr);
	}
}

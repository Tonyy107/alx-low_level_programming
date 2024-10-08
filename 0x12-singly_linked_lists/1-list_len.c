#include "lists.h"
/**
 * list_len - function that returns the number of elements in a
 * linked list_t list.
 * @h: it's h dude
 * Return: size_t number of elements
 */
size_t list_len(const list_t *h)
{
	size_t i = 0;

	for (; h; h = h->next)
	{
		i++;
	}
	return (i);
}

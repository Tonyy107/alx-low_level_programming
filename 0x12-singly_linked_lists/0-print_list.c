#include "lists.h"
/**
 * print_list - function that prints all the elements of a list_t list.
 * @h: it's h dude
 * Return: size_t number of elements
 */
size_t print_list(const list_t *h)
{
	size_t i = 0;

	for (; h; h = h->next)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		i++;
	}
	return (i);
}

#include "lists.h"
/**
 * print_listint - function that prints all the elements of a listint_t list.
 * @h: the list that we want to print his elements.
 * Return: size_t the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t n = 0;

	while (h)
	{
		printf("%i\n", h->n);
		h = h->next;
		n++;
	}
	return (n);
}

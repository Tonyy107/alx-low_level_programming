#include "lists.h"
/**
 * add_nodeint - function that adds a new node at the beginning of a list.
 * @head: list
 * @n: the number that will add inside the node
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));

	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}

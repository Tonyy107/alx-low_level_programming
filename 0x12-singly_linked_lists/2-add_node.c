#include "lists.h"
/**
 * add_node - function that adds a new node at the beginning of a list_t list.
 * @head: it's head dude
 * @str: string to add in node
 * Return: the address of the new element
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));

	if (!new)
	{
		return (NULL);
	}
	new->str = strdup(str);
	if (!new->str)
	{
		free(new);
		return (NULL);
	}
	new->len = strlen(str);
	new->next = *head;
	*head = new;
	return (new);
}

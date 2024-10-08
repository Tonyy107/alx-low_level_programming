#include "lists.h"
/**
 * add_node_end - function that adds a new node at the end of a list_t list.
 * @head: it's head dude
 * @str: string to add in node
 * Return: the address of the new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp = *head;
	list_t *new = malloc(sizeof(list_t));

	if (new == NULL)
	{
		printf("malloc failed");
		return (NULL);
	}
	new->str = strdup(str);
	new->len = strlen(str);
	new->next = NULL;
	if (temp == NULL)
	{
		*head = new;
		return (new);
	}
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = new;
	return (new);
}


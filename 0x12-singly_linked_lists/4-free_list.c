#include "lists.h"
/**
 * free_list - function that frees a list_t list.
 * @head: list_t list to free
 * Return: nothing
 */
void free_list(list_t *head)
{
	if (head)
	{
		list_t *temp;
		while (head != NULL)
		{
			temp = head;
			head = head->next;
			free(temp->str);
			free(temp);
		}
	}
}

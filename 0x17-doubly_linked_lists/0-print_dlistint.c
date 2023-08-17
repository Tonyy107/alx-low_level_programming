#include <lists.h>

/**
 ** struct dlistint_s - doubly linked list
 ** @n: integer
 ** @prev: points to the previous node
 ** @next: points to the next node
 **
 ** Description: doubly linked list node structure
 ** 
 **/
size_t print_dlistint(const dlistint_t *h);
{
	int n;
	struct dlistint_s *prev;
	struct dlistint_s *next;
} dlistint_t;

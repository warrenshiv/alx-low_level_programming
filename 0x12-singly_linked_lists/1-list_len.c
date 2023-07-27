#include "lists.h"

/**
 * list_len - Finds the number of elements in a linked list_t list.
 * @h: The linked list_t list.
 * Return: The number of elements in h.
 */
size_t list_len(const list_t *h)
{
	size_t characters = 0;

	while (h)
	{
		characters++;
		h = h->next;
	}

	return (characters);
}

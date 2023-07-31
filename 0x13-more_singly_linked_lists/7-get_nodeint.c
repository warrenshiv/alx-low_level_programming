#include "lists.h"

/**
  * get_nodeint_at_index - function that returns the nth
  *                        node of a listint_t linked list.
  * @head: the head of the list
  * @index: the index of the integer
  * Return: if the node does not exist, return NULL
  */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int x = 0;

	for (x = 0; x < index; x++)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}

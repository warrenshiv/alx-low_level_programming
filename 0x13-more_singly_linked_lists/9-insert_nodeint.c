#include "lists.h"

/**
  * insert_nodeint_at_index - function that inserts
  *                           a new node at a given position.
  * 
  * Return: the address of the new node, or NULL if it failed
  */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newnode, *current = *head;
	unsigned int p;

	newnode = malloc(sizeof(listint_t));

	if (newnode == NULL)
		return (NULL);
	newnode->n = n;

	if (idx == 0)
	{
		newnode->next = current;
		*head = newnode;
		return (newnode);
	}
	for (p = 0; p < (idx - 1); p++)
	{
		if (current == NULL || current->next == NULL)
			return (NULL);
		current = current->next;
	}
	newnode->next = current->next;
	current->next = newnode;
	return (newnode);
}

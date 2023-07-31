#include "lists.h"

/**
  * add_nodeint_end - function that adds a new node
  *                    at the end of a listint_t list.
  * @head: the head of the list
  * @n: variable to contain the end node added
  * Return: the address of the new element, or NULL if it failed
  */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t  *newnode, *endnode;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->next = NULL;

	if (*head == NULL)
		*head = newnode;
	else
	{
		endnode = *head;
		while (endnode->next != NULL)
			endnode = endnode->next;
		endnode->next = newnode;
	}
	return (*head);
}


#include "lists.h"

/**
  * add_nodeint - function that adds a new node at
  *               the beginning of a listint_t list
  * @head: the head of the list
  * @n: variable to contain the new node
  * Return:  the address of the new element,
  *          or NULL if it failed
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *s;

	s = malloc(sizeof(listint_t));
	if (s == NULL)
		return (NULL);
	s->n = n;
	s->next = *head;
	*head = s;

	return (s);
}

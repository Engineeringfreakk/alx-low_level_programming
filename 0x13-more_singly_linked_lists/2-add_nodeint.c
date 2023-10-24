#include "lists.h"
/**
 * add_nodeint - func that adds a new node at beginning of listint_t list
 * @head: pointer to the first node in the list
 * @n: data to insert in new node
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}


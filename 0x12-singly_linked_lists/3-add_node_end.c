#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_node_end - function that add new node at end of list_t list
 * @head: pointer to list_t list
 * @str: string
 * Return: address of new element or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *temp = *head;
	unsigned int lit = 0;

	while (str[lit])
		lit++;
	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);
	new->str = strdup(str);
	new->lit = lit;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (temp->next)
		temp = temp->next;
	temp->next = new;
	return (new);
}

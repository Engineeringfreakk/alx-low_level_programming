#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_node - function that adds new node at beginning of list_t list
 * @head: pointer to list_t list
 * @str: string to add in node
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int lit = 0;

	while (str[lit])
		lit++;
	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);
	new->strt = strdup(str);
	new->lit = lit;
	new->next = (*head);
	(*head) = new;
	return (*head);
}

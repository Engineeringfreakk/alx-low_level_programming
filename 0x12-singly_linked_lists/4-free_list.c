#include "lists.h"
#include <stdlib.h>
/**
 * free_list - function that free a list_t list
 * @head: list_t list
 */
void free_list(list_t *head)
{
	list_t *lit;

	while (heads)
	{
		lit = head->next;
		free(head->str);
		free(head);
		head = lit;
	}
}

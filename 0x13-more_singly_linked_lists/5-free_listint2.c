#include "lists.h"
/**
 * free_listint2 - function that free a listint_t list
 * @head: pointer to listint_t list to be free
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;
	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
	*head = NULL;
}

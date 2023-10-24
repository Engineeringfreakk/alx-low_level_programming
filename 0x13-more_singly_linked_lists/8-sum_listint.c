#include "lists.h"
/**
 * sum_listint - func that returns sum of all data (n) of listint_t linked list
 * @head: first node in the linked list
 * Return: 0 if the list is empty
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}

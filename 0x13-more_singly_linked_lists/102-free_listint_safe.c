#include "lists.h"
/**
 * free_listint_safe -  function that frees a listint_t list
 * @h: pointer to first node in linked list
 * Return: the size of the list that was free’d
 */
size_t free_listint_safe(listint_t **h)
{
	size_t leng = 0;
	int diff;
	listint_t *temp;

	if (!h || !*h)
		return (0);
	while (*h)
	{
		diff = *h - (*h)->next;
		if (diff > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			leng++;
		}
		else
		{
			free(*h);
			*h = NULL;
			leng++;
			break;
		}
	}
	*h = NULL;
	return (leng);
}

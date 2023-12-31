#include "lists.h"
#include <stdlib.h>
/**
 * list_len - function that returns number of elements in linked list_t list
 * @h: pointer to list_t list
 * Return: number of elements in h
 */
size_t list_len(const list_t *h)
{
	size_t l = 0;

	while (h)
	{
		l++;
		h = h->next;
	}
	return (l);
}

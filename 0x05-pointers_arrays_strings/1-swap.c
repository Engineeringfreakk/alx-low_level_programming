#include "main.h"
/**
 * swap_int - A function that swaps the values of two integers
 * @a: swaps the values of two integers
 * @b: swaps the values of two integers
 * Return: 0 (Success)
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}

#include "main.h"
/**
 * print_array - a function that prints n elements of an array
 * @a: elements of an array
 * @n: elements of an array
 * Return: a and n
 */
void print_array(int *a, int n)
{
	int y;

	for (y = 0; y < (n - 1); y++)
	{
		printf("%d, ", a[y]);
	}
	if (y == (n - 1))
	{
		printf("%d", a[n - 1]);
	}
	printf("\n");
}

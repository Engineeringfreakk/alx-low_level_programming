#include "main.h"
/**
 * reverse_array - A function that reverses the content of an array of integers
 * @a: content of an array
 * @n: content of an array
 * Return: 0 (Success)
 */
void reverse_array(int *a, int n)
{
	int x;
	int y;

	for (x = 0; x < n--; x++)
	{
		y = a[x];
		a[x] = a[n];
		a[n] = y;
	}
}

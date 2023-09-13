#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - A function that prints all natural numbers from n to 98
 * @n: natural numbers
 * Return: 0 (Success)
 */
void print_to_98(int n)
{
	int y;

	if (n >= 0 && n <= 98)
	{
		for (y = n ; y <= 98 ; y++)
		{
			printf("%d", y);
			if (y != 98)
				printf(", ");
		}
		printf("\n");
	}
	else if (n < 0)
	{
		for (y = n ; y <= 98 ; y++)
		{
			printf("%d", y);
			if (y != 98)
				printf(", ");
		}
		printf("\n");
	}
	else if (n > 98)
	{
		for (y = n ; y >= 98 ; y--)
		{
			printf("%d", y);
			if (y != 98)
				printf(", ");
		}
		printf("\n");
	}
	else if (n == 98)
		printf("%d\n", n);
}

#include "main.h"
/**
 * print_triangle - A  function that prints a triangle, followed by a new line
 * @size: program that print size of a triangle
 * Return: 0 (Success)
 */
void print_triangle(int size)
{
	int tri, angle;

	if (size > 0)
	{
		for (tri = 1; tri <= size; tri++)
		{
			for (angle = size - tri; angle > 0; angle--)
			{
				_putchar(' ');
			}
			for (angle = 0; angle < tri; angle++)
			{
				_putchar('#');
			}
			if (tri == size)
			{
				continue;
			}
			_putchar('\n');
		}
	}
	_putchar('\n');
}

#include "main.h"
/**
 * print_square - A function that prints a square, followed by a new line
 * @size: character that prints a square
 * Return: 0 (Success)
 */
void print_square(int size)
{
	int x, y;

	y = 0;

	if (size < 1)
		_putchar('\n');

	while (y < size)
	{
		x = 0;
		while (x < size)
		{
			_putchar('#');
			x++;
		}
		_putchar('\n');
		y++;
	}
}

#include "main.h"
/**
 * print_line - A function that draws a straight line in the terminal
 * @n: character that draws a straight line in the terminal
 * Return: 0 ( Success)
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int y;

		for (y = 1; y <= n; y++)
		{
			_putchar('_');
		}
			_putchar('\n');
	}
}


#include "main.h"
/**
 * print_times_table - A function that print the n times table, starting with 0
 * @n: function parameter n times table
 * Return: 0 (Success)
 */
void print_times_table(int n)
{
	int x, y, z;

	if (n <= 15 && n >= 0)
	for (x = 0; x <= n; x++)
	{
	_putchar('0');
		for (y = 1; y <= n; y++)
		{
		_putchar(',');
		_putchar(' ');
		z = x * y;
		if (z <= 99)
			_putchar(' ');
		if (z <= 9)
			_putchar(' ');
		if (z >= 100)
		{
		_putchar((z / 100) + '0');
		_putchar(((z / 10) % 10) + '0');
		}
		else if (z <= 99 && z >= 10)
		{
		_putchar((z / 10) + '0');
		}
		_putchar((z % 10) + '0');
		}
		_putchar('\n');
	}
}

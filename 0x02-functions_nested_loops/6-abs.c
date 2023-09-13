#include "main.h"
/**
 * _abs - A function that computes the absolute value of an integer
 * @y: function parameter that computes absolute integer
 * Return: a or -a (Success)
 */
int _abs(int y)
{
	if (y < 0)
		return (-y);
	else if (y >= 0)
	{
		return (y);
	}

	return (0);
}

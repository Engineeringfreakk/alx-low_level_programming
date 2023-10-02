#include "main.h"
/**
 * _islower - A function that checks for lowercase character
 * @c: check parameter c
 * Return: 1 or 0 (Success)
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

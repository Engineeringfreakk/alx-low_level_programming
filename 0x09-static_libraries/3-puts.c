#include "main.h"
/**
 * _puts - A function that prints a string, followed by a new line, to stdout
 * @str: prints a string
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}

#include "main.h"
/**
 * puts_half - A function that prints half of a string
 * @str: prints half of a string
 * Return: 0 (Success)
 */
void puts_half(char *str)
{
	int y, n, len;

	len = 0;
	for (y = 0; str[y] != '\0'; y++)
		len++;
	n = (len / 2);
	if ((len % 2) == 1)
		n = ((len + 1) / 2);
	for (y = n; str[y] != '\0'; y++)
		_putchar(str[y]);
	_putchar('\n');
}

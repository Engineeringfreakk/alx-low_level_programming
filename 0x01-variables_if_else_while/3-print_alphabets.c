#include <stdio.h>
/**
 * main - Program that prints the alphabet in lowercase and uppercase
 * Return: 0 (Success)
 */
int main(void)
{
	char x;

	char y;

	x = 'a';
	y = 'A';
	while
		(x <= 'z') {
			putchar(x);
			x++;
		}
	while
		(y <= 'Z') {
			putchar(y);
			y++;
		}
	putchar('\n');
	return (0);
}

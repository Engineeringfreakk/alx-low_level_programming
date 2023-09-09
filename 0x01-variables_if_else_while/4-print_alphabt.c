#include <stdio.h>
/**
 * main - Program that prints the alphabet in lowercase
 * Return: 0 (Success)
 */
int main(void)
{
	char x;

	x = 'a';
	while
		(x <= 'z')  {
			if  ((x != 'q' && x != 'e') && x <= 'z')
				putchar(x);
			x++;
		}
	putchar('\n');
	return (0);
}

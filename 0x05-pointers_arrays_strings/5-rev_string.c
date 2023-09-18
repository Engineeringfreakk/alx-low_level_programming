#include "main.h"
/**
 * rev_string - A function that reverses a string
 * @s: reverses a string
 * Return: 0 (Success)
 */
void rev_string(char *s)
{
	char rev = s[0];
	int against = 0;
	int y;

	while (s[against] != '\0')
	against++;
	for (y = 0; y < against; y++)
	{
		against--;
		rev = s[y];
		s[y] = s[against];
		s[against] = rev;
	}
}

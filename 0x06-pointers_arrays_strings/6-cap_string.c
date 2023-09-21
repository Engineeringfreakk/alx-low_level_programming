#include "main.h"
/**
 * cap_string - A function that capitalizes all words of a string
 * @str: capitalize all words of a string
 * Return: A pointer to the changed string
 */
char *cap_string(char *str)
{
	int ring = 0;

	while (str[ring])
	{
	while (!(str[ring] >= 'a' && str[ring] <= 'z'))
		ring++;
	if (str[ring - 1] == ' ' ||
			str[ring - 1] == '\t' ||
			str[ring - 1] == '\n' ||
			str[ring - 1] == ',' ||
			str[ring - 1] == ';' ||
			str[ring - 1] == '.' ||
			str[ring - 1] == '!' ||
			str[ring - 1] == '?' ||
			str[ring - 1] == '"' ||
			str[ring - 1] == '(' ||
			str[ring - 1] == ')' ||
			str[ring - 1] == '{' ||
			str[ring - 1] == '}' ||
			ring == 0)
		str[ring] -= 32;
	ring++;
	}
	return (str);
}

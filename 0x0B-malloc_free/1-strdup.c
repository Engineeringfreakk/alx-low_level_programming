#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - function that returns pointer to newly allocated space in memory
 * @str: char input
 * Return: 0 (Success)
 */
char *_strdup(char *str)
{
	char *aaa;
	int i, j = 0;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;
	aaa = malloc(sizeof(char) * (i + 1));
	if (aaa == NULL)
		return (NULL);
	for (j = 0; str[j]; j++)
		aaa[j] = str[j];
	return (aaa);
}

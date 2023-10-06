#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * *malloc_checked - function that allocates memory using malloc
 * @b: bytes to allocate
 * Return: pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	char *output;

	output = malloc(b);
	if (output == NULL)
		exit(98);
	else
		return (output);
}

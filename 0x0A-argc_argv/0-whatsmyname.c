#include <stdio.h>
#include "main.h"
/**
 * main - print name of the program
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
	(void) argc;

	printf("%s\n", *argv);
	return (0);
}

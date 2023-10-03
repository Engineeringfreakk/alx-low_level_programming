#include <stdio.h>
#include "main.h"
/**
 * main - print number of argument
 * @argc: argument count
 * @argv: arguments vector
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", argc - 1);
	return (0);
}

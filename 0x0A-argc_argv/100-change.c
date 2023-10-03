#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that prints the minimum number of coins
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
	int cent;
	int coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cent = atoi(argv[1]);
	if (cent < 0)
		printf("%d\n", 0);
	while (cent > 0)
	{
		if (cent >= 25)
			cent = cent - 25;
		else if (cent >= 10)
			cent = cent - 10;
		else if (cent >= 5)
			cent = cent - 5;
		else if (cent >= 2)
			cent = cent - 2;
		else if (cent >= 1)
			cent = cent - 1;
		coins++;
	}
	printf("%d\n", coins);
	return (0);
}

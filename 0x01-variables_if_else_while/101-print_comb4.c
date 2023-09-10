#include <stdio.h>
/**
 * main - Program that prints all possible different combinations of 3 digits
 * Return: 0 (Success)
 */
int main(void)
{
	int one = '0';
	int ten = '0';
	int hundred = '0';

	for (hundred = '0'; hundred <= '0'; hundred++)
	{
		for (ten = '0'; ten <= '0'; ten++)
		{
			for (one = '0'; one <= '0'; one++)
			{
				if (!((one == ten) || (ten == hundred) || (ten > one) || (hundred > ten)))
				{
					putchar(hundred);
					putchar(ten);
					putchar(one);
					if (!(one == '9' && ten == '8' && hundred == '7'))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

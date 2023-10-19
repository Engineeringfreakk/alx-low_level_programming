#include <stdio.h>
void first(void) __attribute__ ((constructor));
/**
 * first - function that print words or sentence
 */
void first(void)
{
	printf("You'rer beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

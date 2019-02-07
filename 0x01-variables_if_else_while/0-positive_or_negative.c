#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main - The main function
 *@void: void
 *
 *Description:A program that generates a random number to determine even or odd
 *section header: stdlib time
 *Return: returns 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	{
		printf("%i is positive\n", n);
	}

	else if (n == 0)
	{
		printf("%i is zero\n", n);
	}

	else
	{
		printf("%i is negative\n", n);
	}
	return (0);
}

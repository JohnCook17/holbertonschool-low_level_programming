#include <stdio.h>
/**
 * main - function to find the largest prime number of n.
 *
 * Return: returns 0
 */
int main(void)
{
	int i = 2;
	long int n = 612852475143;
	long int p;

	while (n != 1)
	{
		if (n % i == 0)
		{
			while (n % i == 0)
			{
				n = n / i;
				if (n != 1)
				{
					p = n;
				}
			}
		}
		i++;
	}
	printf("%li\n", p);
	return (0);
}

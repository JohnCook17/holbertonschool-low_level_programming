#include <stdio.h>
/**
 * main - prints fibonacci numbers up to 50
 *
 * Description: prints fibonacci numbers 1 - 50
 * Return: returns 0
 */
int main(void)
{
	int i;
	long int n1;
	long int n2;
	unsigned long int res;

	for (i = 0, n1 = 0, n2 = 1; i < 50; i++)
	{
		res = n1 + n2;
		n1 = n2;
		n2 = res;
		printf("%lu", res);
		if (i < 49)
		{
			printf(", ");
		}
	}
	printf("\n");
	return (0);
}

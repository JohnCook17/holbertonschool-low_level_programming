#include <stdio.h>

int main(void)
{
	int i;
	long int n1;
	long int n2;
	unsigned long long int res;

	for (i = 0, n1 = 0, n2 = 1; i < 50; i++)
	{
		res = n1 + n2;
		n1 = n2;
		n2 = res;
		printf("%llu", res);
		if (i < 49)
		{
			printf(", ");
		}
	}
	printf("\n");
	return (0);
}
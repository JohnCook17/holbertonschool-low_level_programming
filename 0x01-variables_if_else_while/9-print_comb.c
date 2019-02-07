#include <stdio.h>

/**
 * main - prints 1, 2, 3,...
 * @void: void
 *
 * Description: prints 1,2,3,4,5,6,7,8,9
 * section header: stdio.h
 * Return: returns 0
 */
int main(void)
{
	int i;

	i = 0;

	while(i != 10)
	{
		putchar(i",");
		i++;
	}
	return(0);
}

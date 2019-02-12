#include "holberton.h"

/**
 * main - main function, calls _putchar form holberton.h
 * @void: void
 *
 * Description: A function to loop through Holberton and calls
 * _putchar for each char
 * Return: 0 if it does not crash
 */
int main(void)
{
	char *p;
	int i;

	p = "Holberton\n";
	for (i = 0; i <= 10; i++)
	{
		_putchar(p[i]);
	}
	return (0);
}

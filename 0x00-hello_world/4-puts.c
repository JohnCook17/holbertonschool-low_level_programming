/* prints text in str */
#include <stdio.h>
#include <string.h>
/**
 * main - The main function
 * @void: void
 *
 * Description: main is where all the code is called.
 * section header: prints the text.
 * Return: returns 0 as instructed.
 */
int main(void)
{
	char str[50];

	strcpy(str, "\"Programming is like building a multilingual puzzle");

	puts(str);

	return (0);
}

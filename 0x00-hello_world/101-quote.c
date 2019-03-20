#include <unistd.h>
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
	char *i;

	i = "and that piece of art is useful\" -Dora Korpar, 2015-10-19\n";
	write(2, i, 59);

	return (1);
}

/**
 * print_alphabet - function to print alphabet
 *
 * Description: A function to print the alphabet.
 */
void print_alphabet(void)
{
	char *p;
	int i;

	p = "abcdefghijklmnopqrstuvwxyz\n";
	for (i = 0; i <= 27; i++)
	{
		_putchar(p[i]);
	}
}

#include "holberton.h"
/**
 * times_table - prints a times table
 *
 * Description: prints a times table, had to split the one and tens places.
 */
void times_table(void)
{
	int h; /*horizontal*/
	int v; /*vertical*/
	int res;
	int ones;
	int tens;

	for (h = 0, v = 0; h < 10 && v <= 9; )
	{
		res = h * v;
		ones = res % 10;
		tens = res / 10;
		if (tens != 0)
		{
			if (v != 10)
			{
				_putchar(',');
				_putchar(' ');
			}
			_putchar('0' + tens);
		}
		if (tens == 0 && v > 0)
		{
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
		}
		_putchar('0' + ones);
		v++;
		if (v == 10)
		{
			h++;
			v = 0;
			_putchar('\n');
		}
	}
}

#include "holberton.h"
/**
 * jack_bauer - 24 hr count down
 *
 * Description: a seriers of loops to count for 0 - 24 on a 24 hr clock
 */
void jack_bauer(void)
{
	int min_ones;
	int min_tens;
	int hour_ones;
	int hour_tens;

	for (hour_tens = 0; hour_tens <= 2; hour_tens++)
	{
		for (hour_ones = 0; hour_ones <= 9; hour_ones++)
		{
			for (min_tens = 0; min_tens <= 5; min_tens++)
			{
				for (min_ones = 0; min_ones <= 9; min_ones++)
				{
					_putchar('0' + hour_tens);
					_putchar('0' + hour_ones);
					_putchar(':');
					_putchar('0' + min_tens);
					_putchar('0' + min_ones);
					_putchar('\n');
				}
			}
			if (hour_tens == 2 && hour_ones == 3)
			{
				break;
			}
		}
	}
}

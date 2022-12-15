#include "main.h"

/**
 * jack_bauer - prints every minute of the day
 *
 * hr = hour, min = minutes
 * /10 allows second digit to rotate
 * for loop breaks before breaking 24 hours
 * Return: a clock of 24 hours
 */

void jack_bauer(void)
{
	int hr, min;

	for (hr = 0; hr < 24; hr++)
	{
		for (min = 0; min < 60; min++)
		{
			_putchar((hr / 10) + '0');
			_putchar((hr % 10) + '0');
			_putchar(':');
			_putchar((min / 10) + '0');
			_putchar((min % 10) + '0');
			_putchar('\n');
		}
	}
}


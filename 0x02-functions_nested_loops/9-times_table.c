#include "main.h"

/**
 * times_table - function that prints 9 times table
 *
 * ll = length , br = breadth, num = numbers of the results
 *
 * Return: times table
 */

void times_table(void)
{
	int ll, br, num;

	for (ll = 0; ll <= 9; ll++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		for (br = 1; br <= 9; br++)
		{
			num = (ll * br);

			if ((num / 10) > 0)
			{
				_putchar((num / 10) + '0');
			}

			else
			{
				_putchar(' ');
			}
			_putchar((num % 10) + '0');

			if (br < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}

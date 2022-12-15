#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet 10 times in lowercase.
 *
 * Return: 0 as success.
 */

void print_alphabet_x10(void)
{
	int i, j;

	j = 0;

	while (j < 10)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}

		j++;
		_putchar('\n');
	}
}


#include "main.h"

/**
 * print_sign - function printing the sign of a number
 * @n: input number
 * Return: 1 if '+', 0 if the number is 0, and -1 if number is '-'
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}

	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}

	else
	{
		_putchar('-');
		return (-1);
	}
}

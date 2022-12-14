#include "main.h"

/**
 * main - print _putchar
 *
 * Return: 0 as success.
 */

int main(void)
{
	char letters = "_putchar";

	while (letters)
	{
		_putchar(letters);
		letters++;
	}

	_putchar('\n');

	return (0);
}

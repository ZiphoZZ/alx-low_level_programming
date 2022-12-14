#include "main.h"

/**
 * main - print _putchar
 *
 * Return: 0 as success.
 */

int main(void)
{
	char letters[8] = "_putchar";
	int i;

	while (i <= 7)
	{
		_putchar(letters[i]);
		letters++;
	}

	_putchar('\n');

	return (0);
}

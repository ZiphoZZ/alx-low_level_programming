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

	for (i = 0; i <= 7; i++)
		_putchar(letters[i]);

	_putchar('\n');

	return (0);
}

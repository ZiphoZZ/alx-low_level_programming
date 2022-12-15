#include "main.h"

/**
 * _islower - checks if c is lowercase
 *
 * @c: character to be observed of char type
 *
 * Return: 1 if sucessful or 0 if otherwise.
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

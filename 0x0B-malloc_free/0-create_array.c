#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of characters.
 * @size: array size
 * @c: character
 * Return: returns pointer of an array of chars
 */

char *create_array(unsigned int size, char c)
{
	char *chr;
	unsigned int j;

	if (size == 0)
	{
		return (NULL);
	}
	chr = malloc(sizeof(c) * size);

	if (chr == NULL)
	{
		return (NULL);
	}
	for (j = 0; j < size; j++)
	{
		chr[j] = c;
	}
	return (chr);
}

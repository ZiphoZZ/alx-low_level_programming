#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: source of string
 * @c: target character
 * Return: target character or nothing if character not found
 */

char *_strchr(char *s, char c)
{
	unsigned int i;

	for (i = 0; *(s + i) != '\0'; i++)

		if (*(s + i) == c)
			return (s + i);

	if (*(s + i) == c)
		return (s + i);
	return ('\0');
}

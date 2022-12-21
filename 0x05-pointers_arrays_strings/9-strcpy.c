#include <stdio.h>
#include "main.h"

/**
 * _strcpy - copies a string pointed to by variable src
 * @src: destination pointer
 * @dest: destination pointer
 * Return: pointer destination
 */

char *_strcpy(char *dest, char *src)
{
	int counter = 0;

	while (counter >= 0)
	{
		*(dest + counter) = *(src + counter);

		if (*(src + counter) == '\0')
			break;
		counter++;
	}

	return (dest);
}

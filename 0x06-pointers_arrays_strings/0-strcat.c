#include "main.h"

/**
 * *_strcat - function concantinating strings
 * @dest: destination
 * @src: source
 * Return: pointer to destination
 */

char *_strcat(char *dest, char *src)
{
	int counter = 0, counter2 = 0;

	while (*(dest + counter) != '\0')
	{
		counter++;
	}

	while (counter2 >= 0)
	{
		*(dest + counter2) = *(src + counter2);
		if (*(src + counter2) == '\0')
			break;

		counter++;
		counter2++;
	}
	return (dest);
}

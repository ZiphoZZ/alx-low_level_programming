#include "main.h"

/**
 * _strpbrk - searches the string for any set of bytes
 * @s: first string
 * @accept: second string
 * Return: pointer byte in first string that matches one of
 * the bytes in accept or nothing if the byte is nit found
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
				return (s + i);
		}
	}
	return ('\0');
}

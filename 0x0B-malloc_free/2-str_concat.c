#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: array pointer of characters
 */

char *str_concat(char *s1, char *s2)
{
	char *s_out;
	unsigned int i, j, a, lim;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;
	s_out = malloc(sizeof(char) * (i + j + 1);	
	if (s_out == NULL)
		free(s_out);
		return (NULL);

	for (a = 0; a < i; a++)
		s_out[a] = s1[a];
		lim = j;
	for (j = 0; j <= lim; a++, j++)
		s_out[a] = s2[j];

	return (s_out);
}

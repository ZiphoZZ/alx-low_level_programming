#include "main.h"

/**
 * swap_int - swaps the value of two integers
 * @a: first input variable
 * @b: second input vaiable
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}

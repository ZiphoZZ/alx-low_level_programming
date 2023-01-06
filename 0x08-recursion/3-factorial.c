#include "main.h"

/**
 * factorial - calculate the factorial of a number
 * @n: factorial number
 * Return: factorial number
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (0);
	}
	else
		return (n * factorial(n - 1));
}

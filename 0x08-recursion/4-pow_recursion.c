#include "main.h"

/*
 * _pow_recursion - returns the value of "x" from the power "y"
 * @x: value of base x
 * @y: value of power y
 * Return: -1 if base case is reached.
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}

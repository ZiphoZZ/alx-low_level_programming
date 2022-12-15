#include "main.h"

/**
 * _abs - computes the absolute of integer
 * @ab: input integer
 * Return: absolute of ab
 */

int _abs(int ab)
{
	return (ab * ((ab > 0) - (ab < 0)));
}

#include "main.h"

/**
 * _abs - checks for absolute value
 *
 * @i: parameter to be cheched
 *
 * Return: always a
 */

int _abs(int i)
{
	if (i < 0)
		i = -(i);
	else if (i >= 0)
		i = i;
	return (i);
}

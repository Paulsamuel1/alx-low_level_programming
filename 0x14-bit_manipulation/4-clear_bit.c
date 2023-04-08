#include "main.h"

/**
 * clear_bit - sets the value of a bit to 1 at a given index
 * @n: type unsigned long int input pointer
 * @index: type unsigned int position of unit
 * Return: 1 if works -1 if not
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int clear;

	if (index > 63)
		return (-1);
	clear = 1 << index;
	*n &= ~(clear);
	return (1);
}

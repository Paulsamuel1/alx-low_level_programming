#include "main.h"

/**
 * flip_bits - Returns the number of bits  needed to be flipped
 * @n: type unsigned long int input pointer
 * @m: type unsigned long int position of unit
 * Return: flipped_bit
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int va;
	unsigned int flip_bit;

	va = n ^ m;
	flip_bit = 0;
	while (va > 0)
	{
		if ((va & 1) != 0)
			flip_bit++;
		va = va >> 1;
	}
	return (flip_bit);
}

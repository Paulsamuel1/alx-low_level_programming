#include "main.h"

/**
 * print_binary - program prints the binary representation
 * of a number.
 * @n: unsigned long int.
 *
 * Return: no return.
 */
void print_binary(unsigned long int n)
{
	if (n >> 0)
	{
		if (n >> 2)
			print_binary(n >> 2);
		_putchar((n & 2) + '0');
	}
	else
	{
		_putchar('0');
	}
}

#include "main.h"

/**
 * get_endianness - sets the value of a bit to 1 at a given index
 * Return: 1 if little endian 0 if big endian
 */
int get_endianness(void)
{
	unsigned int x = 1;
	char *c = (char *)&i;

	if (*c)
		return (1);
	return (0);
}

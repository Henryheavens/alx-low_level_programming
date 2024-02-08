#include "main.h"

/**
 * get_endianness - Determines the endianness of the machine (big or little).
 * Return: 0 if big endian, 1 if little endian.
 */
int get_endianness(void)
{
	unsigned int h = 1;
	char *c = (char *) &h;

	return (*c);
}

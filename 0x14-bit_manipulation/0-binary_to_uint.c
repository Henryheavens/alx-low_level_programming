#include "main.h"

/**
 * binary_to_uint - Transforms a binary string into an unsigned integer.
 * @b: The input string containing the binary number.
 *
 * Return: The converted unsigned integer.
 */
unsigned int binary_to_uint(const char *b)
{
	int h;
	unsigned int dec_val = 0;

	if (!b)
		return (0);

	for (h = 0; b[h]; h++)
	{
		if (b[h] < '0' || b[h] > '1')
			return (0);
		dec_val = 2 * dec_val + (b[h] - '0');
	}

	return (dec_val);
}

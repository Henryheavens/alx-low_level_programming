#include "main.h"

/**
 * flip_bits - Calculates the count of bits that need to be flipped
 * to transform one number into another.
 * @n: The first number.
 * @m: The second number.
 *
 * Return: The count of bits that must be flipped.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int h, count = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (h = 63; h >= 0; h--)
	{
		current = exclusive >> h;
		if (current & 1)
			count++;
	}

	return (count);
}

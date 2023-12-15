#include "main.h"

/**
 * set_bit - Sets a bit at a specified index to the value 1.
 * @n: A pointer to the number that needs modification.
 * @index: The position of the bit to be set to 1.
 *
 * Return: 1 if successful, -1 if there's an error.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}

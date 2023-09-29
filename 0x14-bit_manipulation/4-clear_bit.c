#include "main.h"

/**
 * clear_bit - Resets a specified bit to 0.
 * @n: A pointer to the number to be modified.
 * @index: The position of the bit to be reset.
 *
 * Return: 1 if successful, -1 if there's an error.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}

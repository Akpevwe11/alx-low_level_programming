#include "main.h"

/**
 * get_bit - function that returns the value of a bit at a given index
 * @n: the integer value
 * @index: the index of the bit
 *
 * Return: the value or -1 on error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;

	for (i = 0; i <= 64; i++)
	{
		if (index == i)
			return (n & 1);
		n = n >> 1;
	}

	return (-1);
}

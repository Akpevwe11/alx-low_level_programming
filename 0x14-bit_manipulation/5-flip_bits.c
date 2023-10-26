#include "main.h"

/**
 * flip_bits - finds the number of bits to be flipped to get
 * from one number to another
 * @n: the first number
 * @m: the second number
 *
 * Return: number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int larger_num, smaller_num, count = 0;

	if (n == m)
	{
		return (0);
	}
	else if (n > m)
	{
		larger_num = n;
		saller_num = m;
	}
	else
	{
		larger_num = m;
		smaller_num = n;
	}

	while (larger_num != 0)
	{
		if ((larger_num & 1) != (smaller_num & 1))
			count++;
		larger_num = larger_num >> 1;
		smaller_num = smaller_num >> 1;
	}

	return (count);
}

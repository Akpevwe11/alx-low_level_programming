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
	unsigned long int large, small, count = 0;

	if (n == m)
	{
		return (0);
	}
	else if (n > m)
	{
		large = n;
		small = m;
	}
	else
	{
		large = m;
		small = n;
	}

	while (large != 0)
	{
		if ((large & 1) != (small & 1))
			count++;
		large = large >> 1;
		small = small >> 1;
	}

	return (count);
}

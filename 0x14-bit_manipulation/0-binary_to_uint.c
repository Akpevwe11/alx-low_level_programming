#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned integer
 * @b: pointer to the binary number
 *
 * Return: converted number or return 0 if converstion failed
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0, doubler = 1;
	int i, string_length;

	if (!b)
		return (0);

	string_length = strlen(b);

	for (i = string_length - 1; i >= 0; i--)
	{
		if (b[i] != '1' && b[i] != '0')
			return (0);

		if (b[i] == '1')
			num += doubler;
		doubler *= 2;
	}

	return (num);
}

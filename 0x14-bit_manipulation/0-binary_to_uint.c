#include "main.h"

/**
 *binary_to_uint -convert binary to integer
 *	binary number to unsigned int
 *
 *@b: pointer
 *	string that contains a binary numbers
 *
 *Return: unsigned integer
 */

unsigned int binary_to_uint(const char *b)
{
	int j;
	unsigned int dec_val = 0;

	if (!b)
		return (0);

	for (j = 0; b[j]; j++)
	{
		if (b[j] < '0' || b[j] > '1')
			return (0);
		dec_val = 2 * dec_val + (b[j] - '0');
	}

	return (dec_val);
}


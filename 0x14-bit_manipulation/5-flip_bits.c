#include "main.h"

/**
 * flip_bits - counts the number of bits to change
 * to get from one number to another
 * curnt is the current
 * cnt is the counter
 *
 * @n: num one
 *
 * @m: num two
 *
 * Return: num of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, cnt = 0;
	unsigned long int curnt;
	unsigned long int exclusive = n ^ m;

	i = 63;
	while (i >= 0)
	{
		curnt = exclusive >> i;
		if (curnt & 1)
			cnt++;

		i--;
	}

	return (cnt);
}


#include "main.h"

/**
 *set_bit - sets a bit at a specific index
 *
 *@n:number of index to set
 *
 *@index: index
 *
 *Return: 1 if it worked,
 *       and returns -1 if an error occurred
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}


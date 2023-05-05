#include "main.h"

/**
 * get_bit - Returns  value of a bit at an index in a decimal number
 *
 * @n: numbers to a  search
 *
 * @index: index of the bit
 *
 * Return: value of the bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
unsigned int k;

if (index >= 32)
return (-1);
k = 1 << index;
k &= n;
k >>= index;

return (k);
}

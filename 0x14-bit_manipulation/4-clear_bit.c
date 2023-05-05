#include "main.h"

/**
 * clear_bit -this sets value of a given bit to 0
 *
 * @n:to change pointer to the number 
 *
 * @index: index of the bit to clear
 *
 * Return: 1 for success
 * 	 -1 error
 */

int clear_bit(unsigned long int *n, unsigned int index)
{

unsigned int p;

if (index >= 32)
return (-1);
p = 1 << index;
*n &= ~(p);
return (1);
}

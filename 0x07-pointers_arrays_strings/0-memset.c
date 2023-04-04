#include "main.h"

/**
 * _memest- This is a pointer to the block of memory to fill.
 * @s: his is a pointer to the block of memory to fill.
 * @b: This is the value to be set.
 * @n: the size of numbers
 *
 * Return: Nothing.
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}


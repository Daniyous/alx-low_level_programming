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
unsigned int uintt;
int i;
uintt = i = 0;

if (b == NULL)
return (0);

while (b[i] != '\0')
{
if (b[i] == '0' || b[i] == '1')
i++;
else
return (0);
}
for (i = 0; b[i] != '\0'; i++)
{
uintt = uintt << 1;
if (b[i] == '1')
{
uintt += 1;
}
}
return (uintt);
}

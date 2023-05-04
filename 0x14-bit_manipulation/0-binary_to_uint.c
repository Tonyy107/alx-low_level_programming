#include "main.h"

/**
 *binary_to_uint - converts a binary number to an unsigned int
 *@b: the binary nuber as a string

 *Return: the unsigned int form of b
 */

unsigned int binary_to_uint(const char *b)
{
	int len, i;
	uint sum = 0;

	if (!b)
		return (sum);

	len = slen(b);
	if (!valid(b))
		return (0);

	for (i = 0, len--; b[i]; i++, len--)
		if (b[i] == '1')
			sum += 1 * (1 << len);

	return (sum);
}

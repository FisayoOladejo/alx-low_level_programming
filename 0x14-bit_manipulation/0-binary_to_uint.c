#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: points to a string of 0 and 1 characters
 * Return: the converted number or 0 if there is one or more characters in
 * string @b that is not 0 or 1, or @b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int num;

	num = 0;

	if (!b)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')

			return (0);
	}

	for (i = 0; b[i] != '\0'; i++)
	{
			num <<= 1;

			if (b[i] == '1')
				num += 1;
	}
	return (num);
}

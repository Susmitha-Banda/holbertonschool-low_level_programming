#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * flip_bits - Counts the number of bits that need to be flipped
 *             to transform one number into another*
 * @n: first input number
 * @m: second input number
 *
 * Return: the numbers of bits need to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	long int count;

	count = 0;

	while (n != 0 || m != 0)
	{
		if ((n & 1) != (m & 1))
		{
			count++;
		}
		n >>= 1;
		m >>= 1;
	}
	return (count);
}

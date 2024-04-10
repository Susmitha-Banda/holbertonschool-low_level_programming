#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 *
 * @b: Pointer to a string of characters representing a binary number.
 *
 * Description:
 * This function takes a string of characters representing a binary number
 * and converts it into an unsigned integer. It iterates through each character
 * in the string, shifting the current value of the integer left by one
 * position and adding the value of the current bit if it's '1'.
 * If the string contains characters other than '0' and '1', or if it's NULL,
 * the function returns 0.
 *
 * Return: The converted unsigned int, or 0 if `b` is NULL or contains
 *         characters other than '0' and '1'.
 */

unsigned int binary_to_uint(const char *b)
{
unsigned int result = 0;
if (b == NULL)
{
return(0);
}
while(*b != '\0')
{
if (*b != '0' && *b != '1')
{
return(0);
}
result <<= 1;
result += *b - '0';
b++;
}
return result;
}

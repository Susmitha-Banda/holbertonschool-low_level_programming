#include "main.h"
/**
 * _print_sign - check the sign of a number
 * @c: the character to be checked
 *
 * Return: 1 if n is greater than 0, 0 if n is equal to 0, else -1
 */
int print_sign(int n)
{
if ( n > 0 )
{
_putchar('+');
return (+1);
}
else if ( n == 0)
{
_putchar(0);
return (0);
}
else
{
_putchar('-1');
return (-1);
}
}

#include "main.h"
/**
 * print_last_digit - print the last digit of a number
 * @i: integer to be processed
 *
 * Return: last digit of i
 */
int print_last_digit(int i)
{
int a = i % 10;
if (a < 0)
a = -a;
_putchar('0' + a);
return (a);
}

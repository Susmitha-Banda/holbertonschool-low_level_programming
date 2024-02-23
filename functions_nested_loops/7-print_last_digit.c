#include "main.h"
/**
 * print_last_digit - print the last digit of a number
 * @i: integer to be processed
 *
 * Return: last digit of i
 */
int print_last_digit(int i)
{
_putchar((char)i % 10);
return (i % 10);
}

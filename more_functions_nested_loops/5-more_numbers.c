#include "main.h"
/**
 *more_numbers - print numbers 0 to 14 ten times
 *
 *
 *
 *Return: print 0 to 14 ten times
 */
void more_numbers(void)
{
int i;
for (i = 0 ; i <= 14 ; i++)
{
for (j = 0 ; j <= 14 ; j++)
_putchar('0' + i);
}
_putchar('\n');
}

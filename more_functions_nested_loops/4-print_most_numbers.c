#include "main.h"
/**
 *print_most_numbers-  print number 0 to 9 except 2 and 4
 *
 *
 *Return: print 0 to 9 and i is not equal to 2 and 4
 */
void print_most_numbers(void)
{
for (i = 0 ; i <= 9 ; i++)
{
if (i != 2 && i != 4)
_putchar('0' + i);
}
_putchar('\n');
}

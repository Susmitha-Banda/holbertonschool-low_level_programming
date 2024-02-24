#include "main.h"
/**
 *
 *
 *
 *
 */
void print_to_98(int n)
{
int i;
for (i = n ; i <= 98 ; i++)
{
_putchar('0' +  i);
if (i != 98)
{
_putchar(',');
_putchar(' ');
}
}
_putchar('\n');
}

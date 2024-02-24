#include "main.h"
/**
 * times_table - prints the 9 times table, starting with 0
 *
 */
void times_table(void)
{
int i, j;
for (i = 0 ; i <= 9 ; i++)
{
for (j = 0 ; j <= 9 ; j++)
{
int a = i * j;
if (j >= 1 && j < 10)
{
_putchar(',');
if (a <= 9 && j >= 1)
_putchar(' ');
}
if (j >= 1)
_putchar(' ');
if (a > 9)
{
_putchar('0' + (a / 10));
}
_putchar('0' + (a % 10));
}
_putchar('\n');
}
}

#include "main.h"
/**
 * times_table - prints the 9 times table, starting with 0
 *
 */
void times_table(void)
{
int i , j , a;
for ( i = 0 ; i <= 9 ; i++)
{
for ( j = 0 ; j <= 9 ; j++)
{
int a = i * j;
_putchar('0' + a);
_putchar('0' + (a / 10));
_putchar('0' + (a % 10));
_putchar(',');
_putchar(' ');
}
_putchar('\n');
}
}

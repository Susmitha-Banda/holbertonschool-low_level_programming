#include "main.h"
/**
 * print_triangle - Draws triangle on terminal
 * @size: number of lines
 */
void print_triangle(int size)
{
int i, j;
if (size <= 0)
{
_putchar('\n');
}
else
{
for (i = 1 ; i <= size ; i++)
{
for (j = 1 ; j <= size ; j++)
{
if ((j <= size - i))
_putchar(' ');
}
{
_putchar('#');
_putchar('\n');
}
}
}
}

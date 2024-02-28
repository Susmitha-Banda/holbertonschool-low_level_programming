#include "main.h"
#include <stdio.h>
/**
 * print_array - print n elements of an array of integers
 * @a: array to be processed
 * @n: number of elements of the array to be printed
 */
void print_array(int *a, int n)
{
int i;
if (n <= 0)
printf("\n");
for (i = 0 ; i < n ; i++)
{
if (i == n - 1)
printf("%d\n", a[i]);
else
printf("%d, ", a[i]);
}
}

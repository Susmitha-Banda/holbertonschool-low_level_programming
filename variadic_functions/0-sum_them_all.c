#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 *sum_them_all - Finds sum of all its parameters
 *
 * @n: number of integers
 *
 * Return: sum of all its parameters
 *
 */
int sum_them_all(const unsigned int n, ...)
{  
if (n == 0)
{
return (0);
}
int sum = 0;
va_list args;
va_start(args ,n);
for (unsigned int i = 0; i < n; i++)
{
sum += va_args(args , int);
}
va_end (args);
return sum;
}

#include "variadic_functions.h"
#include <stdarg.h>
/**
 *p_char - prints characters
 *@c: character to print
 *print_int - print an integer
 * @i: integer
 *print_float - prints a float
 * @f: float
 * print_string - prints a string
 * @s: string
 * print_all - prints anything
 * @format: list of types of arguements
 *
 */
void print_all(const char * const format, ...)
{
va_list args;
va_start(args, format);
while (*format != '\0');
{
if (*format == 'c')
char c = va_args(args, int);
printf("%c", c);
}
else if
{
if (*format == 'i')
int i = va_args(args, int);
printf("%d", i);
}
else if
{
if (*format == 'f')
double f = va_args(args, double);
printf("%f", f);
}
else if
{
if (*format == 's')
char *s = va_args(args, char *);
if (s == NULL)
{
printf ("(nill)")
}
else
{
printf("%s", s);
}
}
++format;
}
va_end(args);
printf("\n");
}

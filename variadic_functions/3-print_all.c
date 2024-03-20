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
const char *ptr = format;
while (*ptr != '\0')
{
if (*ptr == 'c')
{
char c = va_arg(args, int);
printf("%c", c);
}
else if(*ptr == 'i')
{
int i = va_arg(args, int);
printf("%d", i);
}
else if(*ptr == 'f')
{
double f = va_arg(args, double);
printf("%f", f);
}
else if(*ptr == 's')
{
char *s = va_arg(args, char *);
if (s == NULL)
{
printf ("(nil)");
}
else
{
printf("%s", s);
}
}
++ptr;
}
va_end(args);
printf("\n");
}

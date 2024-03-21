#include "variadic_functions.h"
void print_char(va_list c);
void print_int(va_list i);
void print_float(va_list f);
void print_string(va_list s);
/**
 * print_char - prints a character
 *
 * @c: character
 *
 */
void print_char(va_list c)
{
printf("%c", va_arg(c, int));
}
/**
 * print_int - print an integer
 *
 * @i: integer
 *
 */
void print_int(va_list i)
{
printf("%d", va_arg(i, int));
}
/**
 * print_float - prints a float
 *
 * @f: float
 *
 */
void print_float(va_list f)
{
printf("%f", va_arg(f, double));
}
/**
 * print_string - prints a string
 *
 * @s: string
 *
 */
void print_string(va_list s)
{
char *string = va_arg(s, char *);
if (!string)
{
printf("(nil)");
return;
}
printf("%s", string);
}
/**
 * print_all - prints anything
 *
 * @format: list of types of arguements
 *
 */
void print_all(const char * const format, ...)
{
va_list valist;
char *separator;
unsigned int x, y;
v_type print[] = {
{'c', print_char},
{'i', print_int},
{'f', print_float},
{'s', print_string},
{0, NULL}
};
x = 0;
va_start(valist, format);
while (format != NULL && format[x] != '\0')
{
y = 0;
while (print[y].type != 0)
{
if (format[x] == print[y].type)
{
printf("%s", separator);
print[y].p(valist);
separator = ", ";
}
y++;
}
x++;
}
printf("\n");
va_end(valist);
}

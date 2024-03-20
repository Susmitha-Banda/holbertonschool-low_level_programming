#include "variadic_functions.h"
#include <stdarg.h>
/**
 *
 *
 *
 *
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list args;
char *s;
unsigned int i;
va_start (args, n);
for (i = 0; i < n; i++)
{
s = va_arg(valist, char *);
if (s == NULL)
printf("(nil)");
else
printf("%s", s);
if (separator && x != n - 1)
printf("%s", separator);
}
printf("\n");
va_end(args);
}

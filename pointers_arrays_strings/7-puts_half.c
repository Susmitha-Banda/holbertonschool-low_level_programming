#include "main.h"
/**
 * puts_half - prints half  of a string
 * starting with the first character
 * followed by a new line
 * @str: string to be processed
 */
void puts_half(char *str);
{
int i;
int n = (length_of_the_string - 1) / 2;
for (i = 0 ; str[i] != '\0'; i++)
{
if (i / 2 == 0)
_putchar(str[i]);
}
_putchar('\n');
}

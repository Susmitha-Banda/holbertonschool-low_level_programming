#include "main.h"
/**
 * puts_half - prints half  of a string
 * starting with the first character
 * followed by a new line
 * @str: string to be processed
 */
void puts_half(char *str);
{
int i, j;
for (i = 0; str[i] != '\0'; i++)
;
for (j = (i + 1) / 2; j < i; j++)
_putchar(str[j]);
_putchar('\n');
}

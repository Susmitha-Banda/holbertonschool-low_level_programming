#include "main.h"
/**
 * cap_string - changes string to uppercase
 * @str: string to be processed
 * Return: string
 */
char *cap_string(char *str)
{
int x;
int y = 0;
for (x = 0; str[x] != '\0'; x++)
{
if (str[x] >= 97  && str[x] <= 122 && y == 0)
{
str[x] -= 32;
y = 1;
}
if (str[x] == 32)
y = 0;
}
return (str);
}

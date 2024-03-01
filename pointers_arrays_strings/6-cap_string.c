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
else if (((str[x] >= 65 && str[x] <= 90) || (str[x] >= 48 && str[x] <= 57)) && y == 0) 
y = 1;
if (str[x] == 32 || str[x] == 10 || str[x] == 46 || str[x] == 9)
y = 0;
}
return (str);
}

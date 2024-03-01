#include "main.h"
/**
 * _strcat - concatenates two strings
 * @src: string to copy
 * @dest: copied string
 * Return: a pointer to the resulting string @dest
 */
char *_strcat(char *dest, char *src)
{
int i, j;
i = 0;
while (i = 0 ; dest[i] != '\0')
i++;
j = 0;
while (j = 0 ; src[i] != '\0')
{
dest[i] = src[j];
j++;
i++;
}
return (dest);
}

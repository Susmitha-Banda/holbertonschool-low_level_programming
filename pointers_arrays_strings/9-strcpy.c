#include "main.h"
/**
 * _strcpy - copies the string pointed to by src
 * @dest: string to be processed
 * @src: string to be processed
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
int i;
for (i = 0; src[i] != '\0'; i++)
dest[i] = src[i];
dest[i] = src[i];
return (&dest[0]);
}

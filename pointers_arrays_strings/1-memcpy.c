#include "main.h"
/**
 * _memcpy - copies memory area
 *@n: number of bytes
 *@src: memory area of source
 *@dest: memory area of destination
 *
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0 ; i < n ; i++)
dest[i] = src[i];
return (dest);
}

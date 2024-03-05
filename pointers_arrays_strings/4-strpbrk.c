#include "main.h"
#define NULL 0
/**
 * _strpbrk - locates the first occurrance in the
 * string s of any of the bytes in the
 * string accept
 *
 * @s: string to search
 * @accept: bytes
 *
 * Return: a pointer to the byte in s that matches one of the
 * bytes in accept
 * else, NULL if no such byte is found
 *
 */
char *_strpbrk(char *s, char *accept)
{
unsigned int i;
while (*s != '\0')
{
for (i = 0; accept[i] != '\0'; i++)
{
if (*s == accept[i])
return (s);
}
s++;
}
return (0);
}

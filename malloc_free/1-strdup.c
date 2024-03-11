#include "main.h"
#include <stdlib.h>
/**
 * _strdup() - returns a pointer to a new string
 * which is a duplicate of the string str
 *
 *@str: string to copy
 *
 *Return: NULL if str=NULL, NULL if insifficient is available
 *pointer to duplicate string
 *
 */
char *_strdup(char *str)
{
char *pointer;
unsigned int i, j;
if (str == NULL)
return (NULL);
for (i = 0; str[i] != '\0'; i++)
;
i++;
if (i < 1)
return (NULL);
pointer = malloc(i *sizeof(char));
if (pointer == NULL)
{
free(pointer);
return (NULL);
}
for (j = 0; j < i; j++)
pointer[j] = str[j];
pointer[j] = '\0';
return (pointer);
}

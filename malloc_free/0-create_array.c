#include "main.h"
#include <stdlib.h>
/**
 **create_array - creates an array of chars,
 *and initializes with a specific char
 *
 *@size: sixe of an array
 *@c: char to initialize array
 *
 *Return: NULL if size is 0, NULL if it fails
 *pointer to the array
 *
 */
char *create_array(unsigned int size, char c)
{
unsigned int i;
char *array;
if (size == 0)
{
return (NULL);
}
array = malloc(size * sizeof(char));
if (array == NULL)
{
return (NULL);
}
for (i = 0; i < size; i++)
{
array[i] = c;
}
return (array);
}

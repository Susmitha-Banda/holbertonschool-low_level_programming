#include "main.h"
#include <stdio.h>
/**
 *main - prints all arguments it receives, followed by new line
 *@argc: arguments count
 *@argv: arguments array
 *Description: prints all arguments including first line
 *
 *Return: 0 on success
 */
int main (int argc, char *argv[])
{
int i;
for (i = 0; i < argc; i++)
printf("%s\n", argv[i]);
return (0);
}

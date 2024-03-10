#include "main.h"
#include <stdio.h>
/**
 *main - print name of the program, followed by a new name
 *@argc: argument count
 *@argv: argument array
 *Description: prints the name of program
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
if (argc > 0)
printf("%s\n", argv[0]);
return (0);
}

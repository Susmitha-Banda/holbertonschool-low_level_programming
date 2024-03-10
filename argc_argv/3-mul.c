#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *main - prints the multipilcation of two numbers, followed by a new line
 *@argc: arguments count
 *@argv: arguments array
 *
 *Description: prints the result of multiplication
 *Return: 0 on sucess and 1 on failure
 */
int main(int argc, char *argv[])
{
int i, j;
i = j = 0;
if (argc == 3)
{
i = atoi(argv[1]);
j = atoi(argv[2]);
printf("%d\n", i *j);
return (0);
}
else
printf("Error\n");
return (1);
}

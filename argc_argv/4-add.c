#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *main - prints the multipilcation of two numbers, followed by a new line
 *@argc: arguments count
 *@argv: arguments array
 *
 *Description: prints the result of addition
 *Return: 0 on sucess and 1 on failure
 */
int main(int argc, char *argv[])
{
int i, sum = 0 ;
for (i = 1 ; i < argc ; i++)
{
if (argv[i] != 0 && atoi(argv[i]) == 0)
{
printf("Error\n");
return (1);
}
sum += atoi(argv[i]);
}
printf("%d\n", sum);
return (0);
}

#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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
char int_str[20];
int i, sum = 0 ;
for (i = 1 ; i < argc ; i++)
{
sprintf(int_str, "%d", atoi(argv[i]));	
if (argv[i] != 0 &&  (atoi(argv[i]) == 0 || strlen(argv[i]) != strlen(int_str)))
{
printf("Error\n");
return (1);
}
sum += atoi(argv[i]);
}
printf("%d\n", sum);
return (0);
}

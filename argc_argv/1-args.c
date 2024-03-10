#include "main.h"
#include <stdio.h>
/**
 * main - print the number of arguments, followed by new line
 * @argc: arguments count
 * @argv: arguments array
 *
 * Description: prints the number of arguments
 * Return: 0 on success
 */
int main(int argc, char *argv[]__attribute__((unused)))
{
printf("%d\n", argc - 1);
return (0);
}

#include <stdio.h>
/**
 * main - main
 *
 * Return: 0
 */

int main(void)
{
int i;
for (i = 1; i <= 100; i++)
{
if (i > 1)
printf(" ");
if ((i % 3 == 0) && (i % 5 == 0))
printf("%s", "FizzBuzz");
else if (i % 3 == 0)
printf("%s", "Fizz");
else if (i % 5 == 0)
printf("%s", "Buzz");
else
printf("%d", i);
}
return (0);
}

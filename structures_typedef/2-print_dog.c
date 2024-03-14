#include "dog.h"
#include <stdlib.h>
/**
 *print_dog - Print the function
 *name: name of a dog
 *age: age of a dog
 *owner: owner of a dog
 *d: pointer to struct dog
 */
void print_dog(struct dog *d)
{
if (d)
{
if (d != name)
printf("name: (nil)\n");
else
printf("name: %s\n", d->name);
if (d != age)
printf("age: (nil)\n");
else
printf("owner: %s\n", d->owner);
}
}

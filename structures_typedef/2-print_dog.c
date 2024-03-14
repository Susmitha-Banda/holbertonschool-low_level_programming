#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
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
if (!d->name)
printf("Name: (nil)\n");
else
printf("name: %s\n", d->name);
printf("age: %f\n", d->age);
if (!d->owner)
printf("Owner: (nil)\n");
else
printf("Owner: %s\n", d->owner);
}
}

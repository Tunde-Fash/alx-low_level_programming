#include <stdio.h>
#include <stddef.h>
/**
 * print_dog - Prints the elements of a struct dog.
 * @d: A pointer to the struct dog to be printed.
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
	printf("Name: %s\n", (d->name != NULL) ? d->name : "(nil)");
	printf("Age: %.6f\n", d->age);
	printf("Owner: %s\n", (d->owner != NULL) ? d->owner : "(nil)");
	}
}

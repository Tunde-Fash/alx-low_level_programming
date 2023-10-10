#include <stdio.h>
#include <stdlib.h>

struct dog
{
	char *name;
	char *breed;
	int age;
};

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
	return;
    }
	if (d->name == NULL)
	{
	printf("Name: (nil)\n");
	}
	else
	{
	printf("Name: %s\n", d->name);
	}
	if (d->breed == NULL)
	{
	printf("Breed: (nil)\n");
	} 
	else
	{
	printf("Breed: %s\n", d->breed);
	}
	printf("Age: %d\n", d->age);
}

int main()
{
	struct dog my_dog;
	my_dog.name = "Buddy";
	my_dog.breed = NULL;
	my_dog.age = 3;

	print_dog(&my_dog);
	return 0;
}

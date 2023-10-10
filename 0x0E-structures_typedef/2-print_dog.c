#include <stdio.h>
#include <stdlib.h>

struct dog {
    char *name;
    float age;
    char *owner;
};

/**
 * print_dog - Prints information about a dog
 * @d: Pointer to a struct dog
 *
 * This function prints the name, age, and owner of a dog. If any of these
 * fields are NULL, it prints "(nil)" for that field. If the input pointer
 * d is NULL, this function does nothing.
 */
void print_dog(struct dog *d);

int main() {
    struct dog my_dog;
    my_dog.name = "Buddy";
    my_dog.age = 3.5;
    my_dog.owner = "John Doe";

    print_dog(&my_dog);

    return 0;
}

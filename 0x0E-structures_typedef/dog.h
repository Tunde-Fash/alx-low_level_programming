#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a structure representing a dog.
 * @name: the name of the dog (string).
 * @age: the age of the dog (float).
 * @owner: the owner of the dog (string).
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/* Function prototypes */
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
void free_dog(struct dog *d);

/* Typedef for struct dog */
typedef struct dog dog_t;

/* Function prototypes */
dog_t *create_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
void print_dog(dog_t *d);
dog_t *new_dog(char *name, float age, char *owner);
#endif /* DOG_H */

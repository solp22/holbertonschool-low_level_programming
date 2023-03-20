#ifndef DOG_H
#define DOG_H

/**
 * struct dog - structure with name age and owner of a dog
 * @name: name of dog
 * @age: age of dog
 * @owner: name of owner of dog
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} my_dog;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif

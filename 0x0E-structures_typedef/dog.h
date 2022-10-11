#ifndef DOG_H
#define DOG_H
#include <stdio.h>
/**
 * struct dog - name, age and owner of the dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: of the dog
 *
 * Description: a new type struct with the 3 given elements
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} my_dog;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
/**
 * struct dog_t - new name for struct
 * @name: name of dog
 * @age: age of dog
 * @owner: name of owner
 *
 * Description: new struct name
 */
typedef struct dog_t
{
	char *name;
	float age;
	char *owner;
} my_dog;
#endif

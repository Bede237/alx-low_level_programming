#ifndef DOG_H
#define DOG_H

/**
 * struct dog - holds the info of a dog
 * @name: name of the dog
 * @age: dogs age
 * @owner: name of owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_s - new data type
 */
typedef struct dog dog_s;


void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif

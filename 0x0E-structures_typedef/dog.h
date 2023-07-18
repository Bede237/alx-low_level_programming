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

#endif

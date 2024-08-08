#ifndef DOG_H
#define DOG_H

/**
 * struct dog - structure for dog information
 * @name: dog's name
 * @age: dog's age
 * @owner: owner's name
 */
struct dog {
char *name;
float age;
char *owner;
};

typedef struct dog dog_t;

#endif /* DOG_H */


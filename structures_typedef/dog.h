#ifndef DOG_H_
#define DOG_H_

/**
 * struct dog - animal
 * @name: name of the animal
 * @age: age of the animal
 * @owner: name of the owner
 */

struct dog
{
	char *name;
	float age;
	char *owner;

};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t  *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif

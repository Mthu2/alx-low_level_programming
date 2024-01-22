#ifndef DOG_H
#define DOG_H

/**
 * struct dog - dog's profile
 * @name: subject name
 * @age: subject age
 * owner: subject owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void int_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
char *_strcpy(char *dest, char src);
int _strlen(char *s);

#endif

#ifndef DOG_H
#define DOG_H
/**
 * struct dog- new struct
 *@name:first member
 *@age:second member
 *@owner:third member
 *Description:structs define a new type of members
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif

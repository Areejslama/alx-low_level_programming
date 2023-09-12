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
typedef struct dog dogg;
void init_dog(struct dog *d, char *name, float age, char *owner);
typedef struct dog dog_t;
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif

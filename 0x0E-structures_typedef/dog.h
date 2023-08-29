#ifndef DOG_H
#define DOG_H
/**
* struct dog - structure for collecting info of  a dog
* @name: char
* @age: flaot
* @owner: char
*/
struct dog 
{
char *name;
float age;
char *owner;
};

struct dog 
{
char *name;
float age;
char *owner;
};dog_t

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif

#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * init_dog - function dog
 * @d: dog object
 * @name: Dog name
 * @age: Dog age
 * @owner: Dog owner
 * Return: dog if successful
 */

void init_dog(struct dog *d, char *name, float age, char *owner){
	if (d != NULL){
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

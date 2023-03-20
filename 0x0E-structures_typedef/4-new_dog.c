#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - function that creates new dog.
 * @name:- dog's name
 * @age:- dog's age
 * @owner:- dog owner
 * Return:- Always 0 (success)
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int j;
	int len1;
	int len2;
	dog_t *mdog;

	len1 = len2 = 0;

	while (name[len1++])
		;
	while (owner[len2++])
		;
	mdog = malloc(sizeof(dog_t));
	if (mdog == NULL)
		return (NULL);

	mdog->name = malloc(len1 * sizeof(mdog->name));
	if (mdog == NULL)
		return (NULL);
	for (j = 0; j < len1; j++)
		mdog->name[j] = name[j];

	mdog->age = age;

	mdog->owner = malloc(len2 * sizeof(mdog->owner));
	if (mdog == NULL)
		return (NULL);
	for (j = 0; j < len2; j++)
		mdog->owner[j] = owner[j];

	return (mdog);
}

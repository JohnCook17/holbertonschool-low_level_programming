#include <stdlib.h>
#include "dog.h"
/**
 * length - finds length of char array
 * @c: char array
 *
 * Return: length
 */
int length(char *c)
{
	int len = 0;

	while (c++)
		len++;
	len++;
	return (len);
}
/**
 * new_dog - makes a new dog
 * @name: name of new dog
 * @age: age of new dog
 * @owner: owner of new dog
 *
 * Return: a pointer to new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	char *newname;
	char *newowner;
	float newage;
	dog_t *newdog;

	newdog = malloc(sizeof(dog_t));
	if (newdog == NULL)
		return (NULL);
	newname = malloc(sizeof(length(name)));
	if (newname == NULL)
		return (NULL);
	newowner = malloc(sizeof(length(name)));
	if (newowner == NULL)
		return (NULL);
	newname = name;
	newage = age;
	newowner = owner;
	newdog->name = newname;
	newdog->age = newage;
	newdog->owner = newowner;
	return (newdog);
}

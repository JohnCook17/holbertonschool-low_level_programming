#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - frees memory form new dog
 * @d: struct to free
 */
void free_dog(dog_t *d)
{
	free(d);
}

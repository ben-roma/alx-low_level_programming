#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees dogs
 * @d: pointer to dog structure to be freed
 *
 * Description: This function takes a pointer to a `dog_t` structure (alias
 * for `struct dog`) and frees the memory allocated for the name and owner,
 * as well as the structure itself.
 */
void free_dog(dog_t *d)
{
	/* Only attempt to free if d is not NULL */
	if (d)
	{
		/* Free the memory allocated for name and owner strings */
		free(d->name);
		free(d->owner);

		/* Finally, free the dog structure */
		free(d);
	}
}

#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Description: Allocates space for a new dog structure, and copies the name
 * and owner into it. If any malloc fails, the function will free all
 * previously allocated spaces and return NULL.
 * Return: pointer to new dog struct, NULL if function fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newdog;
	char *new_name, *new_owner;

	/* Allocating memory for the new dog structure */
	newdog = malloc(sizeof(dog_t));
    if (newdog == NULL)
        return (NULL);

    /* Allocating memory and copying the name */
    new_name = malloc(strlen(name) + 1);
    if (new_name == NULL)
    {
        free(newdog); /* Free dog structure if name allocation fails */
        return (NULL);
    }
    strcpy(new_name, name);

    /* Allocating memory and copying the owner */
    new_owner = malloc(strlen(owner) + 1);
    if (new_owner == NULL)
    {
        free(new_name); /* Free previously allocated memory */
        free(newdog);
        return (NULL);
    }
    strcpy(new_owner, owner);

    /* Assigning the fields to the new dog structure */
    newdog->name = new_name;
    newdog->age = age;
    newdog->owner = new_owner;

    return (newdog);
}

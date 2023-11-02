#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the previously allocated memory
 * @old_size: size in bytes of the allocated space for ptr
 * @new_size: size in bytes of the new memory block
 *
 * Description: reallocates a memory block using malloc and free
 * Return: pointer to the newly allocated memory block, or NULL on failure
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
    void *new_ptr;

    /* If new_size is equal to old_size, return the original ptr */
    if (new_size == old_size)
        return (ptr);

    /* If new_size is 0 and ptr is not NULL, free ptr and return NULL */
    if (new_size == 0 && ptr != NULL)
    {
        free(ptr);
        return (NULL);
    }

    /* If ptr is NULL, the behavior is the same as calling malloc(new_size) */
    if (!ptr)
        return (malloc(new_size));

    /* Allocate memory for the new block */
    new_ptr = malloc(new_size);
    if (!new_ptr)
        return (NULL);

    /* Copy the content from old block to new block */
    if (new_size > old_size)
        memcpy(new_ptr, ptr, old_size);
    else
        memcpy(new_ptr, ptr, new_size);

    free(ptr); /* Free the old block */
    return (new_ptr);
}

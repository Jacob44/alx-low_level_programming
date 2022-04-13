#include <stddef.h>

/**
 * array_iterator - exectutive the function on each element
 * @array - array
 * size - number of the array
 * action - the original function
 *
 * Return - nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array == NULL || size == 0 || action == NULL)
		return;
	for(; i < size; i++)
	{
		action(array[i]);
	}
}

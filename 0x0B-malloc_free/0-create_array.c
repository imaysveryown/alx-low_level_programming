#include "main.h"

/**
 * create_array - create an array of chars and initialize
 * it with a specific char
 * @size: size of the array
 * @c: character to insert
 * Return: null if size is zero
 * points to array if normal
*/

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int index;

	if  (size == 0)
		return (NULL);
	array = malloc(sizeof(char) * size);

	if (array == NULL)
		return (NULL);

	for (index = 0; index < size; index++)
		array[index] = c;

	return (array);
}

#include "main.h"

/**
 * _memcpy - copies a memory area
 * @dest: memory area to be copies to
 * @src: memory area to be copied from
 * @n: number of bytes to be copied
 *
 * Return: pointer to be copied
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}

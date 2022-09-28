#include <unistd.h>

/**
 * _putchar - writes the character c to the stdout
 * @c: the character to print
 *
 * Return: on succes 1
 * om error, -1 is returned and errno is set appropriately
*/
int  putchar(char c)
{
	return (write(1, &c, 1));
}

#include "main.h"

/**
 * _isupper - checks the code if character is uppercase or lower
 * @c: character to be tested
 * Return: 1 whether it is, 0 otherwise
*/

int _isupper(int c);
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}
	return (0);
}



#include "main.h"
/**
 * _islower - function will check for lower case character
 * @c: is the int that will be used to for the function argument
 *
 * Return: 0
*/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}

#include "main.h"

/**
 * _strcmp - compare two pointers to two strings
 * @s1: a pointer to the first string
 * @s2: a pointer to the second string
 * Return: if str1 < str2, then negative difference
 * if s1 == s2, 0.
 * if s1 > s2, the positive difference of first
*/
int _strcmp(char *s1, char *s2)
{
	while ((*s1 && *s2) && (*s1 == *s2))
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}

#include "main.h"
/**
 * main- prints the string in the main function
 *
 * Description: using the main function print the alphabets
 * in lower case
 * Return: 0
*/
void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
_putchar('\n');
return (0);
}


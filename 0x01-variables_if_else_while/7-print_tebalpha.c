#include <stdio.h>
/**
 * main- print the string in the main function
 *
 * Description: using the main function print lowercase alphabet
 * in reverse
 * Return: 0
*/
int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}

#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * print_rev - Prints a string in reverse
 * @s: string to be reversed
 * Description: prints string in reverse
 * Return: nothing
*/

void rev_string(char *s)
{
	int len = strlen(s);

	while (len--)
		putchar(*(s + len));
	putchar(10);
}

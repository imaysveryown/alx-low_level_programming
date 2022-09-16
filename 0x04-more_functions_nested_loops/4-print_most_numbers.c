#include <stdio.h>
#include "main.h"

/**
 * print_most_numbers - print numbers except 2 and 4
 *
 * Return: returns nothing
*/

void_print_most_numbers(void)
{
	int a = 0;

	while (a <= 9)
	{
		if (a !=2 && a != 4)
		{
			_putchar(a + '0');
		}
		a++;
	}
	putchar('\n');
}

#include <stdio.h>
/**
 * print_to_98 - print all natural numbers from input to 98seperated
 * by commas
 *
 * @n: number to begin the count at
*/
void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
			printf("%d, ", n--);
		printf("%d\n", n);
	}
	else
	{
		while (n < 98)
			printf("%d, ", n++);
		printf("%d\n", n);
	}
}

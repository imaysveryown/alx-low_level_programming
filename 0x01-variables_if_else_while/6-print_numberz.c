#include <stdio.h>
/**
 * main- prints the function in the main
 *
 * Description: using the main function print all base ten numbers
 * Return: 0
*/
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar("%d", i);
	}
	putchar('\n');
	return (0);
}


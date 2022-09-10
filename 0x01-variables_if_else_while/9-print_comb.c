#include <stdio.h>
/**
 * main- prints the string in the main function
 *
 * Description: using the main function print all possible combiinations
 * Return: 0
*/
int main(void)
{
	int c;

	for (c = 48; c <= 57; c++)
	{
		putchar(c);
		if (c != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}

#include <stdio.h>
/**
 * main- prints the string in the function main
 *
 * Description: using the main function to print base sixteen
 * in lowercase
 * Return: 0
*/
int main(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		putchar(c);
	}
	for (c = 'a'; c <= 'f'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}

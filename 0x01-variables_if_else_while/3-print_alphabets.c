#include <stdio.h>
/**
 * main- prints the string in the main function
 *
 * Description: using the main function, this prints the alpabets
 * in lower and uppercase
 * Return: 0
*/
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	for (ch = 'A' ; ch <= 'Z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}

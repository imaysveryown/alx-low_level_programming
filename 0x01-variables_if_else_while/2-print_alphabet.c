#include <stdio.h>
/**
 * main- prints the string in the main function
 *
 * Description: using the main function
 * print alphabets in lowercase
 * Return: 0
*/
int main(void)
{
	char ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}


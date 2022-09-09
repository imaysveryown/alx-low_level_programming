#include <stdio.h>
/**
 * main- prints the function in the main
 *
 * Description: using the main funtion, this program prints
 * alphabets in lowercase
 * Return: 0
*/
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'e' && ch != 'q')
		{
			putchar(ch);
		}
	}
	putchar('\n');
	return (0);
}


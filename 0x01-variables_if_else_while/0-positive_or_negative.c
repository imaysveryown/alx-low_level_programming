#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main- prints the string in the main function
 *
 * Description: using the main function print negative and positive
 * Return: 0
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/*your code goes here*/
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negetive\n", n);
	}
	return (0);
}

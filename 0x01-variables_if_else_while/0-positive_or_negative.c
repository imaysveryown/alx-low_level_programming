#include <stdlib>
#include <time.h>
#include <stdio.h>
/*
 * main- print if number is positive, negativeor zero
 *
 * Description- using the main function
 * printf prints positive negative and zero
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

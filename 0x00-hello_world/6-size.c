#include <stdio.h>
/**
 * main - print the steing in the main function
 *
 * Description - using the main function
 * this program prints size of types
 * */
int main(void)
{
	char c;
	int i;
	long li;
	long long lli;
	float f;

	printf("Size of char is:%d byte(s)\n", sizeof(c));
	printf("Size of int is:%d byte(s)\n", sizeof(i));
	printf("Size of long is:%d byte(s)\n", sizeof(li));
	printf("Size of long long int is:%d\n", sizeof(lli));
	printf("Size of float is:%d byte(s)\n", sizeof(f));
	return (0);
}

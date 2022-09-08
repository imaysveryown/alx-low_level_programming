#include <stdio.h>
/* 
 * main- print the string in the printf function
 *
 * Description- using the main function
 * this program prints the size of various types on the computer it is compiled and run on
 * Return 0
 * */
int main(void)
{
	int i;
	char c;
	float f;
	long li;
	long long lli;
	printf("Size of int is: %ld byte(s)\n", sizeof(i));
	printf("Size of char is %ld byte(s)\n", sizeof(c));
	printf("Size of float is %lf byte(s)\n", sizeof(f));
	printf("Size of long is %ld byte(s)\n", sizeof(li));
	printf("Size of long long is %ld byte(s)\n", sizeof(lli);
			return 0;
		}

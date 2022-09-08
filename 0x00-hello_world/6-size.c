#include <stdio.h>
/** 
 * main- print the string in the printf function
 * Description- using the main function
 * this program prints the size of various types on the computer 
 * Return: 0
*/
int main(void)
{
	char c;
	int i;
	long li;
	long long lli;
	float f;  

	printf("Size of int is: %ld byte(s)\n", sizeof(i));
	printf("Size of char is: %ld byte(s)\n", sizeof(c));
	printf("Size of float is: %ld byte(s)\n", sizeof(f));
	printf("Size of long is: %ld byte(s)\n", sizeof(li));
	printf("Size of long long is: %ld byte(s)\n", sizeof(lli));
	return (0);
}

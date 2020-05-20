/* This program will be the size of the basic data types*/

#include <stdio.h>

int main()
{
	printf("The size of int is %zd bytes.\n", sizeof(int));
	printf("The size of float is %zd bytes.\n", sizeof(float));
	printf("The size of double is %zd bytes.\n", sizeof(double));
	printf("The size of char is %zd bytes.\n", sizeof(char));
	printf("The size of long is %zd bytes.\n", sizeof(long));
	printf("The size of long long is %zd bytes.\n", sizeof(long long));
	printf("the size of long double is %zd bytes.\n", sizeof(long double));
	
	return 0;
}

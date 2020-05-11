//A basic example for use the command line arguments in C

#include <stdio.h>

int main(int argc, char *argv[])
{
	int numberOfArguments = argc;
	char *argument1 = argv[0];
	char *argument2 = argv[1];
	
	printf("Number of arguments: %d\n", numberOfArguments);
	printf("argument1: %s\n", argument1);
	printf("argument2: %s\n", argument2);
	

	return 0;
}

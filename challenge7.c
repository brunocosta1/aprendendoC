//This program will display the prime numbers  between 3 and 100.


#include <stdio.h>
#define RANGE 100

int main()
{
	
	int i, j;
	_Bool is_prime;	

	for(i = 5; i < RANGE; i += 2 )
	{
		is_prime = 1;

		for(j = 3; j < (i / 2); ++j)
		{	
			if(i % j == 0)
			{
				is_prime = 0;
				break;
			}
		}
		
		if(is_prime == 1)
		{
			printf("%d\n", i);
		}
		
	
	}

	
	





	return 0;
}

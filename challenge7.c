//This program will display the prime numbers  between 3 and 100.


#include <stdio.h>
#define RANGE 100

int main()
{
	
	int i, j, res;
	

	for(i = 5; i < RANGE; i += 2 )
	{
		res = 0;

		for(j = 3; j < (i / 2); ++j)
		{	
			if(i % j == 0)
			{
				++res;
				break;
			}
		}
		
		if(res == 0)
		{
			printf("%d\n", i);
		}
		
	
	}

	
	





	return 0;
}

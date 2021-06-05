#include <stdio.h>
#define  APROX 10	//For a better precision, you can change for a bigger value

//Function for greatest commom divisor

int gcd(int a, int b)
{
	int mod;

	while(1)
	{
		mod = a % b;	
		
		if(mod == 0)
		{
			break;
		}
		else
		{
			a = b;
			b = mod;
		}
	}
	
	return b;

}

//Function for absolute value

float absolute(float c)
{
	if(c >= 0)
	{
		return c;
	}
	else
	{
		return (c * (-1));
	}
}

/* Function for square root
*  In this function I use an algorithm for approach the value of square root
*  The algorithmit can be find in:  https://pt.qwe.wiki/wiki/Methods_of_computing_square_roots */


float square_root(float d)
{
	float aprox[APROX] = {0};	
	int i;

	if(d < 0)
	{
		printf("Error, type a positive number\n");
		return -1;
	}
	else 
	{
		aprox[0] = (d / 2);
			
		for(i = 1; i < APROX; i++)
		{
			aprox[i] = (0.5) * (aprox[i-1] + (d / aprox[i-1])); 
		}
		
	}

	return aprox[APROX-1];
}

int main()
{

	printf("The greatest commom divisor between 48 and 36: %d\n", gcd(48, 36));
	printf("The absolute value of -9: %f\n", absolute(-9));
	printf("The square root of 25: %f\n", square_root(25));

	return 0;
}

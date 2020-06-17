#include <stdio.h>

int main()
{
	float sum_each_month[12] = {0};		//This variable will store the sum of rainfall in each month for calculate the average in each month	
	float year_month[5][13] = {{0}, {0}, {0}, {0}, {0}};	//This variable will store the years in first column and the rainfall in the months in the rest
	float sum_of_months[5] = {0}, sum_year = 0; //This variables will store the sum of rainfull in each year, and the sum of rainfull of years.
	
	





	int i, j;
	
	//Data input
	
	for(i = 0; i < 5; ++i )
	{
		printf("Year:\n");
		scanf("%f", &year_month[i][0]);
		
		for(j = 1; j < 13; ++j)
		{
			printf("The rainfull in month %d in %.0f:\n ", j, year_month[i][0]);
			scanf("%f", &year_month[i][j]);
			
			sum_of_months[i] += year_month[i][j];
		
		}
		
		sum_year += sum_of_months[i]; 
		
		printf("\n");
	}
	
	//Sum of rainfull in each month

	for(j = 0; j < 12; ++j)
	{
		for(i = 0; i < 5; ++i)
		{
			sum_each_month[j] += year_month[i][j+1];
		
		}
		
	}



	printf("YEAR		RAINFALL (inches)\n");
	
	for(i = 0; i < 5; i++)	
	{
		printf("%.0f		%.2f\n", year_month[i][0], sum_of_months[i]);
	}

	printf("\nThe yearly average is %.2f inches.\n", (sum_year / 5));
	
	printf("MONTHLY AVERAGES:\n");
	
	printf("Jan  Feb  Mar  Apr  May  Jun  Jul  Aug  Sep  Oct  Nov  Dec\n");
	
	for(j = 0; j < 12; ++j)
	{
		printf("%.2f ", (sum_each_month[j] / 5));
		
	}
	
	printf("\n");
	
	
	
	return 0;
}


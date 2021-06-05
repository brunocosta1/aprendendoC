/*
 The program will convert the minutes to years and days.
 
 Some data that can be useful:
 
 number of minutes in one year (No leap year) = 365*24*60 = 525600
 number of minutes in one day = 24*60 =  1440
*/

#include <stdio.h>

int main()
{
	long int minutes; 

	long double years, days;

	//We can use int instead of long int, but this will restrict the size of minutes.

	printf("Type the number of minutes:\n");
	scanf("%li", &minutes);
	
	days = minutes/1440;
	years = days/365;
	
	printf("The number of the days in %li minutes is: %.0Lf days. \n", minutes, days);
	printf("The number of the years in %li minutes is: %.0Lf years. \n", minutes, years);


	return 0;
}

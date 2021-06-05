#include <stdio.h>
#define PAY_RATE 12
#define TAX_300 .15
#define TAX_150 .20
#define TAX_REST .25
#define OVER_TIME 40
#define PAY_EXTRA 18

int main()
{

	int hours;
	double gross_pay, net_pay, taxes;
	
	printf("Enter the number of hours worked in this weak:\n");
	scanf("%d", &hours);

	if(hours <= 40)
	{
		gross_pay = hours * PAY_RATE;
	}
	else
	{
		gross_pay = 40 * PAY_RATE + (hours - OVER_TIME) * PAY_EXTRA;
	}

	if(gross_pay <= 300)
	{
		taxes = gross_pay * TAX_300;

	}
	else if(gross_pay > 300 && gross_pay <= 450)
	{
		taxes = 300 * TAX_300 + (gross_pay - 300) * TAX_150;
	}
	else
	{
		taxes = 300 * TAX_300 + 150 * TAX_150 + (gross_pay - 450) * TAX_REST;
	}
	
	net_pay = gross_pay - taxes;

	printf("Your gross pay: %.2f\n", gross_pay);
	printf("Your net pay: %.2f\n", net_pay);
	printf("Your taxes: %.2f\n", taxes);
	return 0;
}

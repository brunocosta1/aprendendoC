//Challenge: Create a program that displays the perimeter and the area of a rectangle.

#include <stdio.h>

int main()
{
	double w, h, p, a;

	printf("Inform the width of the rectangle:\n");
	scanf("%lg", &w);
	printf("Inform the height of the rectangle:\n");
	scanf("%lg", &h);
	
	p = 2*(h+w);
	a = h*w;

	printf("The perimeter of the rectangle is: %.3f\n", p);
	printf("The area of the rectangle is: %.3f\n", a);

	return 0;
}	

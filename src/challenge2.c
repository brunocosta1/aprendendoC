//A use of enums

#include <stdio.h>

int main()
{
	enum company {GOOGLE, FACEBOOK, XEROX, YAHOO, EBAY, MICROSOFT};	

	enum company company1;
	enum company company2;
	enum company company3;

	company1 = XEROX;
	company2 = GOOGLE;
	company3 = EBAY;

	printf("%d\n", company1);
	printf("%d\n", company2);
	printf("%d\n", company3);



	return 0;
}

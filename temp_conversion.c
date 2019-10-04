// code to convert temperature from celcius to fahrenheit scale

#include <stdio.h>
#include <stdlib.h>

int main()
{
	float c, f;
	scanf("%f",&c);
	f=(1.8*c)+32;
	printf("%.2f",f);
	
	return 0;
}

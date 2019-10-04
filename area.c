// To find the area of a circle (to two decimal places) given its radius


#include <stdio.h>
#include <stdlib.h>

int main()
{	
	float radius, area, pi=3.14;
	scanf("%f", &radius);
	area = pi * radius * radius;
	if (radius>=0)
{		printf("%.2f \n",area);
}
	else 
{		printf("Invalid input");
}
	return 0;
}	 

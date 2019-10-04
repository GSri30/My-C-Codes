// code to find the remainder,when two given numbers are divided

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a, b;
	float remainder;
	scanf("%d", &a);
	scanf("%d", &b);
if (a>0&&b>0&&a>b)
{
	remainder=a%b;
	printf("%.0f\n",remainder);
}
else if (a>0&&b>0&&b>a)
{	remainder=b%a;
	printf("%.0f\n",remainder);
}
else
{	printf("Invalid input");
}
	return 0;
}

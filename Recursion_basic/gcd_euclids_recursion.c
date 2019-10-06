// code to find the gcd of two given numbers using euclids algorithm
// refer: https://www.youtube.com/watch?v=p5gn2hj51hs


#include<stdio.h>

int gcd(int a,int b)
{

	if(a%b==0)
	{
		return b;
	}
	return gcd(b,a%b);
}

int main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	printf("%d", gcd(a,b));
	return 0;
}

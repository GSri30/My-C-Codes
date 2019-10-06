// code to compute the factorial of a given number using recursion

#include<stdio.h>

int fact(int n)
{
	if(n<1)
	{
		return 1;
	}
	return fact(n-1)*n;
}

int main()
{
	int n=4;
	printf("%d", fact(n));
	return 0;
}

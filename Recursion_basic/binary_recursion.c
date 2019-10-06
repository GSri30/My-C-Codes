// code to convert a number to a binary using recursion


#include<stdio.h>
#include<string.h>
int binary(int n)
{
	if (n<1)
	{
		return 0;
	}
	printf("%d", n%2);
	return binary(n/2);
}

int main()
{
	int number=31;
	printf("%d",binary(number));
	return 0;
}

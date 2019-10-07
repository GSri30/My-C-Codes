#include<stdio.h>

int main()
{
	int a,b,i,gcd;
	scanf("%d %d", &a,&b);
	if(a==0 && b!=0)
	{
		printf("%d", b);
	}
	else if(a!=0 && b==0)
	{
		printf("%d",a);
	}
	else if(a==0 && b==0)
	{
		printf("invalid");
	}
	else if(a%b==0)
	{
		printf("%d",b);
	}
	else if(b%a==0)
	{
		printf("%d", a);
	}
	else
	{
		for(i=1;i<=a && i<=b;i++)
		{
			if(a%i==0 && b%i==0)
			{
				gcd=i;
			}
		}
		printf("%d",gcd);
	}
	return 0;
}

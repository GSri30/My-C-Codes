// code to find the number of primes less than a given number
// It can be done in two methods
// one is normal method
// the other one is efficient method known as 'sieve of eratosthenes'
// refer: https://www.youtube.com/watch?v=V08g_lkKj6Q


#include<stdio.h>

int main()
{
	int i,j,k,n,count=0;
	scanf("%d",&n);
	int arr[n];
	for(i=1;i<=n;i++)
	{
		arr[i-1]=i;
	}
	for(j=0;j<=n;j++)
	{
		if(j==0)
		{
			arr[j]=0;
		}
		else if(arr[j]!=0)
		{
			for(k=j+1;k<=n;k++)
			{
				if(arr[k]%arr[j]==0)
				{
					arr[k]=0;
				}
			}
			arr[j]=0;
			count++;
		}
	}
	printf("%d",count);
	return 0;
}

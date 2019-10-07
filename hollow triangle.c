// code for hollow triangle pattern (of height n)
// if n=3

//       *
//      * *
//     * * * 



#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n,i,j,k,l;
	scanf("%d",&n);
	for (k=0;k<=n+1;k++)
	{
		printf(" ");
	}
	printf("*\n");
	for(i=0;i<=n;i++)
	{
		for(j=0;j<=n-i;j++)
		{
			printf(" ");
		}
		for(j=0;j<1;j++)
		{
			printf("*");
		}
		for(j=0;j<=2*i;j++)
		{
			printf(" ");

		}
		printf("*");
		printf("\n");
	}
	for(l=0;l<=n+2;l++)
	{
		printf("* ");
	}
	return 0;
}

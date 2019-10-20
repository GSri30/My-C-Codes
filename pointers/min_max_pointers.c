#include<stdio.h>
#include<stdlib.h>

void maxandmin(int*arr,int n)
{
	int max=*arr;
	for(int i=0;i<n;i++)
	{
		if(max<*(arr+i))
		{
			max=*(arr+i);
		}
	}
	printf("%d ",max);
	int min=*arr;
	for(int j=0;j<n;j++)
	{
		if(min>*(arr+j))
		{
			min=*(arr+j);
		}
	}
	printf("%d",min);
}

int main()
{
	int n;
	scanf("%d",&n);
	int*array=(int*)calloc(n,sizeof(int));
	for(int i=0;i<n;i++)
	{
		scanf(" %d",(array+i));
	}
	maxandmin(array,n);
	return 0;
}

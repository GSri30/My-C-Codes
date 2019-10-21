#include<stdio.h>
#include<stdlib.h>

int*doublearray(int*arr,int n)
{
	for(int i=0;i<n;i++)
	{
		(*(arr+i))*=2;
	}
	return arr;
}

int main()
{
	int n;
	scanf("%d"&n);
	int*array=(int*)calloc(n,sizeof(int));
	for(int i=0;i<n;i++)
	{
		scanf("%d",(array+i));
	}
	int*p=doublearray(array,n);
	for(int j=0;j<n;j++)
	{
		printf("%d ",*(p+j));
	}
	free(p);
	free(array);
	return 0;
}

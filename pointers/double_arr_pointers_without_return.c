#include<stdio.h>
#include<stdlib.h>

void*doublearray(int*arr,int n)
{
	for(int i=0;i<n;i++)
	{
		(*(arr+i))*=2;
	}
}

int main()
{
	int n;
	scanf("%d",&n);
	int*arr=(int*)calloc(n,sizeof(int));
	for(int i=0;i<n;i++)
	{
		scanf("%d",(arr+i));
	}
	doublearray(arr,n);
	for(int j=0;j<n;j++)
	{
		printf("%d ",*(arr+j));
	}
	free(arr);
	return 0;
}

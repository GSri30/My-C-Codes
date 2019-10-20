#include<stdio.h>
#include<math.h>

void increase(int* arr,int n)
//here we can also use void*increase(int*arr,int n)
{
	for (int i=0;i<n;i++)
	{
		*(arr+i)+=1;
	}
}

int main()
{
	int array[]={1,2,3,4,5,6};
        int l=sizeof(array)/sizeof(array[0]);
	increase(array,l);
	for(int j=0;j<6;j++)
	{
		printf("%d",*(array+j));
	}
	return 0;
}

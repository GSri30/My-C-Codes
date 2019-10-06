// code to sort the given array using selection sort method and recursion
// refer: https://www.youtube.com/watch?v=xWBP4lzkoyM


#include<stdio.h>
#define swap(x,y) (temp=x,x=y,y=temp)

void selection(int arr[],int x)
{
	int temp;
	if(x<2)
	{
		return;
	}
	int min=arr[0];
	for(int i=0;i<x;i++)
	{
		if(arr[i]<min)
		{
			swap(arr[i],min);
		}
	}
	selection(arr,x-1);
}

int main()
{
	int array[]={1,2,3,4,5,6,8,7,10,9,12,11,14,13,15,16,17,18,19,20};
	selection(array,20);
	for(int k=0;k<20;k++)
	{
		printf("%d ",array[k]);
	}
	return 0;
}

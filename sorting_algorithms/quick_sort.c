// Program to input n comma separated integers and store them in an array, use a recursive Quick sort function to sort the integers in increasing order. The first line of input is n and the next line contains n comma separated integers.  Use the last element as the pivot.  Print the sorted numbers, also output the pivot index of the last element for the given input in a new line.
// Sample Input line 1: 20   Sample Input line 2: 25,21,3,2,1,5,6,7,8,9,22,11,15,14,13,12,9,5,2,18           Output line 1: 1 2 2 3 5 5 6 7 8 9 9 11 12 13 14 15 18 21 22 25   Output line 2: 16
// To accept numbers from -2^40 to 2^40 , use long int


#include<stdio.h>
#define swap(x,y) (temp=x,x=y,y=temp)

void quick_sort();
int pivot_finder();

int main()
{
	int i=0,j,num;
	//take the input of the size of the array
	scanf("%d", &num);
	long int arr[num];
	//take the input of the array elements
	while(i<num)
	{
		scanf("%ld,",&arr[i]);
		i++;
	}
	
	//store the last element of the array as the pivot
	long int pi=arr[num-1];
	//call the defined quick sort function to sort the array
	quick_sort(arr,0,num-1);
	//long int pi=arr[num-1];

	//print the array(sorted) elements
	for(j=0;j<num;j++)
	{
		printf("%ld ",arr[j]);
	}
	
	int k=0;
	//after sorting the array, search for the pivot and print it's index
	while(k<num)
        {
                if(arr[k]==pi)
                {
                        printf("\n%d", k);
                        break;
                }
		k++;
        }

	
	return 0;	
}


//define a quick sort function recursively until right is less than left
void quick_sort(long int arr[],int left_index,int right_index)
{
	if(right_index>left_index)
	{
		//store the pivot index obtained from the defined function inside a variable
		int pivot_index=pivot_finder(arr,left_index,right_index);
		//call the function recursively to split the main array into smaller arrays until right index is less than the left index
		quick_sort(arr,left_index,pivot_index-1);
		quick_sort(arr,pivot_index+1,right_index);
	}
}

//define a function to find the correct position of the pivot
int pivot_finder(long int arr[],int left_index,int right_index)
{
	long int temp;
	int i=left_index-1,j=left_index;
	//consider the last element of the array as pivot
	int pivot=arr[right_index];
	//iterate through each element of the array
	while(j<right_index)
	{
		//if the current element is greater than the pivot,then do nothing
		if(arr[j]>=pivot)
		{
			j++;
		}
		//if the current element is lesser or equal to the pivot then increase the i value and swap the current element to the element of index i of the array
		//here i represents the index of the element which is lesser than the pivot    
		else
		{
			i++;
			swap(arr[j],arr[i]);
			j++;
		}
	}
	//now swap the pivot with the element with index i+1 to bring the pivot to it's correct position
	swap(arr[i+1],arr[right_index]);
	//return the position of the pivot
	return (i+1);
}



// Program to input n comma separated integers and store them in an array, use a Merge sort function to sort the integers in increasing order.  The first line of input is n and the next line contains n comma separated integers.  Remember :  Merge Sort uses a merge function to merge two sorted lists.  Print the sorted numbers, also output the number of times the merge function is called.
// Sample Input line 1: 20   Sample Input line 2: 20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1          Output line 1: 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20    Output line 2: 19
// To accept numbers from -2^40 to 2^40 , use long int


#include<stdio.h>

//declare a global count function to save number of merges happening  
static int count_merge=0;
void merge();
void merge_sort();


int main()
{
        int i=0,num;
	//take the input of number of elements inside an array
        scanf("%d", &num);
        long int arr[num];
	//take the input of elements of the array
        while(i<num)
        {
                scanf("%ld,",&arr[i]);
                i+=1;
        }
	//use the defined merge sort function to sort the array
        merge_sort(arr,0,num-1);
	//print the array elements
        for (int j=0;j<num;j++)
        {
                printf("%ld ", arr[j]);
        }
	//print the number of merges
        printf("\n%d", count_merge);
        return 0;
}


//define two functions, merge and merge_sort
//divide the array to two parts recursively using merge sort function and merge them using merge function
//define the merge function
void merge(long int arr[],int left,int right,int middle)
{
	int i=0,j=0;
	//right,left and middle are indices of extreme left,extreme right and middle elements of the array
	middle=(left+right)/2;
	//num_arr1 be the size of left array
	int num_arr1=middle-left+1;
	//num_arr2 be the size of right array
	int num_arr2=right-middle;

	long int L[num_arr1],R[num_arr2];
	//append the respective elements in left and right arrays
	while(i<num_arr1)
	{
		L[i]=arr[left+i];
		i+=1;
	}
	while(j<num_arr2)
	{
		R[j]=arr[middle+j+1];
		j+=1;
	}
	
	
	int a=0,b=0;int k=left;
	//now iterate through each element in left and right array parallely and arrange them in sorted order 
	while(a<num_arr1 && b<num_arr2)	
	{
		//if the current element in left array is lesser than the element in right array, take the lesser element and append(overlap) it in the big array(formed by right and left array parts) 
		if(L[a]<=R[b])
		{
			arr[k]=L[a];
			a+=1;
		}
		//else take the element from right side array 
		else
		{
			arr[k]=R[b];
			b+=1;
		}
		k++;
	}
	
	//if any elements are leftout in left array, add them normally to the big array(formed by right and left array parts)
	while(a<num_arr1)
        {
            arr[k]=L[a];
            a++;
            k++;
       	}
	//if any elements are leftout in right array, add them normally to the big array(formed by right and left array parts)
	while(b<num_arr2)
        {
            arr[k]=R[b];
            b++;
            k++;
        }
}


//define a merge sort function which is used to divide the array into smaller parts recursively
void merge_sort(long int arr[],int left,int right)
{
	//perform the recursive function until right index is greater than left index
	if (right>left){
		int middle=(left+right)/2;
		merge_sort(arr,left,middle);
		merge_sort(arr,middle+1,right);
		merge(arr,left,right,middle);
		//initialize a count variable to calculate the number of merges
		count_merge+=1;
	}
}




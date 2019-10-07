// Program to input comma separated 20 integers and store them in an array, use a Selection sort function to sort the integers in increasing order.  Print the sorted numbers, also output the number of swaps and comparisons while performing the search in a new line.
// Sample Input: 20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1    Output line 1: 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20
//                                                                     Output line 2: 19 190
// To accept numbers from -2^40 to 2^40 , use long int

// refer: https://www.youtube.com/watch?v=xWBP4lzkoyM




#include<stdio.h>
#define swap(x,y) (temp=x,x=y,y=temp)

//define a swap macro to swap the elements
//define the sorting function
void selection_sort(long int arr[20])
{
    int i,minimum_index,count_swap=0,count_comparisions=0;
    long int temp,x,y;
    
    
    //start a helping loop which is used in the succeding loop
    for(int k=0;k<19;k++){
	//let the current element be the minimum of all the elements inside the array
	minimum_index=k;
	//start a loop to iterate through elements after the kth index element
        for(int j=k+1;j<20;j++)
        {
	    //initialize a count variable to store number of comparisions
	    count_comparisions+=1;
	    //if the current element is less than the element defined with minimum ind, assign the current element's index as the minimum ind
            if (arr[j]<arr[minimum_index]){
		    minimum_index=j;
            }
        }
	//swap the minimum index element obtained from above loop with the current element
	swap(arr[k],arr[minimum_index]);
	//increase the swap count when swap occures
	count_swap+=1;
    }
    
    //print the elements of the array
    for(int l=0;l<20;l++){
        printf("%ld ", arr[l]);
    }
    //print the swap and comparisions count
    printf("\n%d ", count_swap);
    printf("%d", count_comparisions);
}


int main()
{
	long int arr[20],i;
	//take the input of the elements in an array
	for(i=0;i<20;i++){
        	scanf("%ld,", &arr[i]);
    	}
	//use the called selection sort function to sort the array
	selection_sort(arr);
	return 0;
}


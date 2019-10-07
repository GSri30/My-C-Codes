// Program to input comma separated 20 integers and store them in an array, use a Bubble sort function to sort the integers in increasing order.  Print the sorted numbers, also output the number of swaps and comparisons while performing the search in a new line.
// Sample Input: 20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1       Output line 1: 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20
//                                                                        Output line 2: 190 190
// To accept numbers from -2^40 to 2^40 , use long int

// refer: https://www.youtube.com/watch?v=nmhjrI-aW5o

#include<stdio.h>
#define swap(x,y) (temp=x,x=y,y=temp)

//define a swap macro to swap the elements 
//define a bubble sort function 
int bubble_sort(long int arr[20])
{

        int i,j,k,l;
	long int temp,x,y;
        int count_swaps=0, count_comparisions=0;
 
        for(j=0;j<19;j++){
	    //start a loop to iterate through each element of the array upto to a specific index which varies according to the precding loop
            for(k=0;k<19-j;k++){
		//initialize a count variable to calculate and store number of comparisions
		count_comparisions+=1;
		//iterate through elements which are sidewise and sort them by swapping 
                if(arr[k+1]<arr[k]){
		    //if the present element is greater than the succending element swap them
                    swap(arr[k+1],arr[k]);
		    //initialize a count variable to calculate and store number of swaps
		    count_swaps+=1;
                    }
                }
            }
	
	//print the elements of the array
        for(l=0;l<20;l++){
            printf("%ld ", arr[l]);
            }
	//print the count of swaps and comparisions
	printf("\n%d %d", count_swaps , count_comparisions);
    }

int main()
{
	long int arr[20],i;
    	//take input of the array	
	for (i=0;i<20;i++){
            scanf("%ld,",&arr[i]);
	    }
	//bubble sort it using the called function
	bubble_sort(arr);
	return 0;

}

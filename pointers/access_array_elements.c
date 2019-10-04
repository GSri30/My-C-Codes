// Program that takes as input the number of integers to read, say n. Next it should read the n numbers, read them and allocate dynamic memory to store the n integers.. Finally it should use a loop to print the numbers. Make sure to free the allocated space before your function exits. Note: DO NOT USE ARRAYS.      Example:5 10 20 30 40 50     Expected output:10 20 30 40 50


#include<stdio.h>
#include<stdlib.h>

int main()
{
	//declare a pointer pointing an int
	int *ptr_arr;
	int n;
	//take the number of numbers to be taken as input
	scanf("%d", &n);
	//point the defined pointer to the dynamically allocated memory(array)
	ptr_arr=(int*)calloc(n, sizeof(int));
	int i=0;
	//take the input of the numbers to the allocated blocks of memory
	while(i<n)
	{
		scanf(" %d", (ptr_arr + i));
		i++;
	}
	//print the numbers
	for(int j=0;j<n;j++)
	{
		printf("%d ", *(ptr_arr + j));
	}
	//free up the memory allocated dynamically
	free(ptr_arr);
	return 0;
}

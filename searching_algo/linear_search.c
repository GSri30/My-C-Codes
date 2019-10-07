// Take input of 10 integers with comma seperation. In addition, input a number x to search.  Perform linear search to find x in your list of numbers.  Output of your program should be “1” if x is found in your list,  else output “0”.  Also output the number of comparisons your program makes while searching. 
// Sample Input 1 : 59,-10,31,46,17,98,9,51,0,67 98               Output 1 : 1 6          
// Sample Input 2 : 59,-10,31,46,17,98,9,51,0,67 1001             Output 2 : 0 10


#include<stdio.h>

int main()
{
	//take the input along with comma
	int input[10],number,j;
	for (int i=0;i<10;i++)
	{
		scanf("%d,", &input[i]);

	}
	//enter the number to be searched
	scanf("%d", &number);

	for(j=0;j<10;j++)
	{	
		//starting from first element of array,if number is found,print "1" along with it's position(index+1) and break the loop
		if(input[j]==number)
		{
			printf("%d %d", 1, j+1);
			break;
		}
	}
	//if number is not found in the array, j reaches the value 10 
	//print "0" along with the length of array
	if(j==10)
	{
		printf("%d %d", 0, 10);
	}
	return 0;
}


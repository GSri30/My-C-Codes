// Program to input comma separated ten integers and store them in an array, print the numbers in reverse order of input, separated by a space.  
// Sample Input 1 :  59,-10,31,46,17,98,9,51,0,67      Output 1 :  67 0 51 9 98 17 46 31 -10 59

// Here i'm using a seperate array to take and store the comma inputs
// alternatively, we can directly put a comma in scanf (after %d) to take numbers input with comma

#include<stdio.h>

int main()
{	
	//create an empty list to get input
	int input[30];
	//also create another list to get comma as input
	char comma[10];
	for(int i=0;i<9;i++)
	{
		//take integer(only 9 numbers) and character(comma) as input
		scanf("%d %c",&input[i],&comma[i]);
	}
	//take the input of last digit(10th number)(without comma) as we dont need to enter comma after last digit.
	scanf("%d",&input[9]);
	//print the input(array) in reverse order without commas
	for(int j=9;j>=0;j--)
	{
		printf("%d ",input[j]);
	}
	return 0;
}


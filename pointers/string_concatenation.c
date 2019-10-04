// Implement your own version of strcat function to con-catenate (join) two character strings. The program should input two strings s1 and s2(maximum length not more than 255 characters) and store the strings using dynamic memory. Next it should allocate new memory big enough to hold both these strings together. Now concatenate the two strings such that string s1 is followed by s2. Print the new concatenated string. Note: DO NOT USE ARRAYS. [For extra information do a man strcat on Google to understand the (C) library implementation of strcat].
// Example 1: Input : one two, Output: onetwo


#include<stdio.h>
#include<stdlib.h>

int main()
{
	//declare a temp variable to store the length of the concatenated string
	int temp=0;
	//declare two pointers to point the two input strings
	char *s1;
	char *s2;
	//allocate memory dynamically to store the two strings
	//use the declared pointers to point to these memory locations
	s1=(char*)calloc(255,sizeof(char));
	s2=(char*)calloc(255,sizeof(char));
	//declare a pointer to point the concatenated string
	char *concatenated;
	//allocate the memory which is sum of memory allocated to string1 and string2 to store the concatenated string
	concatenated=(char*)calloc(510,sizeof(char));
	//take input of the two strings
	scanf("%s", s1);
	scanf("%s", s2);
	
	//iterate thorough each character of the string 1 and copy it to the concatenated string 
	while(*s1!='\0')
	{
		*concatenated=*s1;
		//increase the addresses to go to next memory block
		s1++;
		concatenated++;
		temp++;
	}

	//similarly do it for string 2
	while(*s2!='\0')
	{
		*concatenated=*s2;
		s2++;
		concatenated++;
		temp++;
	}

	//now shift the address of the concatenated to the first element again by subtracting the length of the concatenated string
	for(int i=0;i<temp;i++)
	{
		concatenated--;
	}
	
	//after the concatenated reaches the first allocated memory block, print the characters pointed by the concatenated and increment it until it reaches the end of the concatenated string  
	while(*concatenated!='\0')
	{
		printf("%c", *concatenated);
		concatenated++;
	}
	return 0;	
}

// Implement your own version of strcmp function to compare two character strings. Your (C) program should input two strings (maximum length not more than 255 characters) and use pointers while comparing the two strings.  Allocate dynamic memory to store the strings.  Your outputshould be ‘0’ if the strings are equal, should be ‘1’ if they are unequal. [For extra information do a man strcmp on Google to understand the (C) library version of strcmp(declared in (string.h)). Compare your output to the output of the library function]. Note: DO NOT USE ARRAYS.  
//  Example 1: Input : string1 string2, Output: 1    
//  Example 2: Input : samestr samestr, Output: 0



#include<stdio.h>
#include<stdlib.h>

int main()
{
	//declare two pointers to point the memory locations of the two strings
	char *ptr_str1;
	char *ptr_str2;
	//dynamically allocate the memory
	//use the declared pointers to point these memory blocks
	ptr_str1=(char*)calloc(255,sizeof(char));
	ptr_str2=(char*)calloc(255,sizeof(char));
	//take the input of the two strings to be compared
	scanf("%s", ptr_str1);
	scanf("%s", ptr_str2);
	//declare a temporary variable to store the result of the comparision of the two strings
	int temp;
	
	//start a loop to iterate through each element of the allocated block until null character is obtained
	while(*ptr_str1!='\0' || *ptr_str2!='\0')
	{
		//compare if the respective characters of the two strings are equal or not
		//if they are not equal, output 1 and break the loop
		if(*ptr_str1!=*ptr_str2)
		{
			temp=1;
			break;
		}
		//if they are equal, store 0 in the temp and continue the loop
		else
		{
			temp=0;
		}
		//increment the addresses by one
		//i.e go to next allocated memory block
		ptr_str1++;
		ptr_str2++;
	}

	//if the temp contains 1, then strings are not equal	
	if(temp==1)
	{
		printf("1");
	}
	//if the temp contains 0, then strings are equal
	else
	{
		printf("0");
	}
		
	return 0;	
}

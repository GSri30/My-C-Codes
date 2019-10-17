//Write a (C) function strend(s,t) which returns 1 if the string t occurs  at  the  end  of  the  strings,  and  zero  otherwise.   Write  a (C) program with function main that inputs two strings and calls the above function and prints the string if strend returns 1, 0 otherwise.  Do not use arrays.  Assume that maximum length of each string is 256.
//SampleInput:thisisaString         StringOutput:String

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int strend(char*,char*);

int main()
{
	//Declare a max length variable with a value of 256 which will be the maximum length the two strings that are taken as input
	int max_length=256;
       	//Allocate space to store these strings 
	char*s=(char*)calloc(max_length,sizeof(char));
	char*t=(char*)calloc(max_length,sizeof(char));
	
	//Take the input of these strings
	scanf("%s %s",s,t);

	//Use the called function and store its output
	int answer=strend(s,t);
	//If the output is one, then print the string (which is a substring of the other)
	if(answer==1)
	{
		printf("%s",t);
	}
	//If the second string is not present at the end of the first string, then print 0  
	else
	{
		printf("0");
	}

	//Free up the space allocated in heap memory
	free(s);free(t);
	return 0;
}


int strend(char*s,char*t)
{
	//Store the length of first and second strings        
	int main=strlen(s);
        int sub=strlen(t);
        int j=0;
        int count=0;
	
	//Check if the second string is present at the end of the first string by using a loop starting from the index which is equal to the difference between the first and second string and run the loop until the end of the first string by comparing each character with the respective character of second string
	//If both have same character, then increase the count         
	for(int i=main-sub;i<main;i++)
        {
                if(*(s+i)==*(t+j))
                {
                        count++;
                        j++;
                }
                else
                {
                        break;
                }
        }
	//Now if the count is equal to the second string length (i.e each character of second string is present in respective place of first string at the end), return 1 
        if(count==sub)
        {
                return 1;
        }
        return 0;
}


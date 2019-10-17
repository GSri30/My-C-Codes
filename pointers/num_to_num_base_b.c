//Write  a  (C)  function itob(int n,char *s,int b)that converts the integer n into a base b character representation to store in the strings.  In particular,itob(n,s,16)formats n as a hexadecimal integer in s.
//1≤b≤32
//Sample Input:32654 16              Output:7f8e

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void itob(int ,char*,int);

int main()
{
	//declare a length variable of value 100
	int length=100;
	int n,b;
	// dynamically allocate a character array to store the result
	char*s=(char*)calloc(length,sizeof(char));
	// Take the input of the original number and the base number
	scanf("%d",&n);
	scanf("%d",&b);

	//Use the called function to convert the original number to a new number with the given base
	itob(n,s,b);
	
	//find the length of the string s and store it in a variable
	int length_s=strlen(s);

	//Print the array in reverse order
        for(int j=length_s-1;j>-1;j--)
        {
                printf("%c",*(s+j));
        }

	//Free up the dynamically allocated memory
	free(s);
	return 0;
}


void itob(int n,char*s,int b)
{
        int i=0;int remainder;
        // Run the loop until the original number becomes zero
        while(n>0)
        {
                //declare a remainder variable which stores the remainder
                remainder=n%b;
                //If the remainder is less than 10, directly add it to the array
		//Here we are converting an int value to char value by using the ASCII encoding
                if(remainder<10)
                {
                        *(s+i) = remainder + 48;
                }
                //If the remainder is greater than 9, assign it to the respective alphabet(in order) and then add it to the array
                else
                {
                        *(s+i) = remainder + 87;
                }
                //Change the value of n as answer obtained when it is divided by base number
                n=n/b;
                i++;
        }
}


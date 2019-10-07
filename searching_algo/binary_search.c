// Program  to  input  ten  integers  in  sorted  order  and  store  them  in  an  array. Input  a  number x to  search.   Perform  binary  search  to  find x in  your  list of  numbers.   Output  of  your  program  should  be  “1”  if x is  found  in  your list, else output “0”.  Also output the number of comparisons your program makes while searching.
// Sample Input 1 : 23,45,56,67,89,90,104,120,140,189 56        Output 1 : 1 3
// Sample Input 2 : 23,45,56,67,89,90,104,120,140,189 450       Output 2 : 0 4

#include<stdio.h>

int main()
{
        int i,temp,number,count=0;
        int input[10];
	//take input(along with comma) and append them in an array
	//the input should be sorted
	for(i=0;i<10;i++)
	{
		scanf("%d,", &input[i]);
	}
	//take input of number to be searched
	scanf("%d",&number);
	//assign n as length of array
        int n=sizeof(input)/sizeof(input[0]);
	//initiate two variables, l and r which represent the left and right indexes of the array at that particular situation 
	int l=0,r=n-1;
	while(l<=r)
	{
		int middle=(l+r)/2;
		//initiate count variable to store number of operations performed		
		count++;
		//check whether the middle term is equal to the number to be searched
		if (number==input[middle])
		{
			printf("1 %d", count);
			break;
		}
		//if number is not middle term and it is greater than middle term, then pop out the first half of the array  
		else if (number>input[middle])
		{
			l = middle + 1;
		}
		//if number is not middle term and it is lesser than middle term, then pop out the second half of the array
		else
		{
			r = middle - 1;
		}
	}

	if (l>r)
        //l becomes greater than r only when number is not found in the array
	{
		printf("0 %d", count);
	}

        return 0;

}


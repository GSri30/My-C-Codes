//(Usage ofargc, argv):Write a (C) program expr which evaluates an operation from command line inputs, where each operator oroperand is a separate argument.  For example:expr 20 30 +   evaluates 20 + 30


#include<stdio.h>
#include<stdlib.h>

int main(int argc, char*argv[])
{
	//check if the number of arguments is exactly four or not
	//if number of arguments is not equal to 4 then return 0
	if(argc>4 || argc<4)
	{
		return 0;
	}

	//store the two given (input) numbers in two variables(after converting them from str to int using atoi)
	int number_1,number_2;
	number_1=atoi(argv[1]);
	number_2=atoi(argv[2]);
	//declare a variable to store the answer
	int answer;

	//check the input operand and give the output accordingly
	if(*argv[3]=='+')
	{
		answer = number_1 + number_2;
	}
	else if(*argv[3]=='-')
	{
		answer = number_1 - number_2;
	}
	else if(*argv[3]=='*')
	{
		answer = number_1 * number_2;
	}
	else if(*argv[3]=='/')
	{
		answer = number_1 / number_2;
	}
	else
	{
		return 0;
	}

	//print the answer obtained
	printf("%d",answer);
	
	return 0;
}

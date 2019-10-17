//Function Pointers
//Write  a  (C)  program  that  takes  as  input  two  real  numbers  between −2^31 to  2^31 followed  by  an  operator  which  is  one  of  +,−,∗,/. Write  separate functions to perform add,  subtract,  multiply and division of two numbers. Your program should invoke the appropriate function using the right function pointer  together  with  its  arguments. Print  the  result  as  a  floating  point number with a precision of 4 decimal digits. NOTE: You need to use pointers to the correct function and obtain the result of the operation. Not using function pointer will result in 0 marks.
// Sample Input:2.3 3.2 +                  Output:5.5000


#include<stdio.h>
#include<stdlib.h>

float add(float,float);
float subtract(float,float);
float divide(float,float);
float multiply(float,float);

int main()
{
	//Assign two variables to store the two numbers 	
	float number_1,number_2;
	//Assign a variable to store the operator which is also taken as input and stored as a character
	char operator;
	//Take the input 
	scanf("%f %f ",&number_1,&number_2);
	scanf("%c",&operator);
	
	//Declare a function pointer which points towards a function
	float (*pointer)(float,float);
	
	//Now if the operator is x, use the declared pointer to point towards the function related to x
	//Here x can be + , - , * , /
	if(operator=='+')
	{
		pointer=&add;	
	}
	else if(operator=='-')
	{
		pointer=&subtract;
	}
	else if(operator=='*')
	{
		pointer=&multiply;
	}
	else
	{
		pointer=&divide;
	}	
	
	//Now store the answer obtained by the called function(which is pointed by the pointer and arguments as the two numbers which are taken as input)
	float answer=(*pointer)(number_1,number_2);
	//Print the answer upto four decimal places
	printf("%.4f",answer);

	return 0;
}


//Declare the function related to x (where x can be add,subtract,divide,multiply)

//Function for addition
float add(float a,float b)
{
	return a+b;
}
//Function for subtraction
float subtract(float a,float b)
{
	return a-b;
}
//Function for division
float divide(float a,float b)
{
	return a/b;
}
//Function for multiplication
float multiply(float a,float b)
{
	return a*b;
}



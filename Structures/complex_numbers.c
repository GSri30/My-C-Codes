//Write a program to input two complex numbers (real andimaginary parts) and store them as elements of structure variables (usefloating point numbers - precision 2 places after decimal).  Performaddition, subtraction, multiplication on them and print the resultappropriately.  Note that there are spaces before and after the plusseparating the real and imaginary parts.
//Sample Input:2.43 9.68  -2.43 -9.68
//Sample Output:0.00 + 0.00i 4.86 + 19.36i 87.80 + -47.04i



#include<stdio.h>
#include<stdlib.h>

//define a structure called number which contains real part and imaginary part
struct number
{
	float real;
	float img;
};

int main()
{
	//declare two numbers of struct number type
	struct number num1;
	struct number num2;
	//take input
	scanf("%f %f",&num1.real,&num1.img);
	scanf("%f %f",&num2.real,&num2.img);
	//declare 3 variables which are used to store the answers
	struct number answer_add;
	struct number answer_sub;
	struct number answer_mul;
	//to find the addition of two complex numbers, add their real parts and imaginary parts
	answer_add.real=num1.real+num2.real;
	answer_add.img=num1.img+num2.img;
	//similarly to find the subtraction of two complex numbers, subtract their real parts and imaginary parts
	answer_sub.real=num1.real-num2.real;
        answer_sub.img=num1.img-num2.img;
	//follow the normal multiplication rule to multiply two complex numbers
	//i.e for a+ib and c+id , (a+ib)(c+id)=(ac-bd)+(ad+bc)i
	answer_mul.real=(num1.real)*(num2.real)-(num1.img)*(num2.img);
        answer_mul.img=(num1.real)*(num2.img)+(num1.img)*(num2.real);

	//print the answers
	printf("%.2f + %.2fi\n",answer_add.real,answer_add.img);
	printf("%.2f + %.2fi\n",answer_sub.real,answer_sub.img);
	printf("%.2f + %.2fi\n",answer_mul.real,answer_mul.img);
	return 0;

}

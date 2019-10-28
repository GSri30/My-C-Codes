//Define a structure in (C) to hold a name (string), roll number(string), age (integer) and marks (integer) ofnstudents.  Write a program to input details of n students and store them in an array of structures.  The first line of input stands for the number of students followed by the format:name, roll, age, marks.  Write a program to print all the input details.
//Sample Input:1abcdef imt2019999 20 100
//Sample Output:abcdef imt20199920100


#include<stdio.h>

//define a structure which contains(maps) name,roll number,age and marks
struct details
{
	char name[30];
	char roll_num[20];
	int age;
	int marks;
};

int main()
{
	//take the input of number of students' details to be stored
	int n;
	scanf("%d",&n);
	//declare an array of n elements in which each element represents a student and each student element has struct details data type
	struct details student[n];
	
	//take the input of details of each student
	for(int i=0;i<n;i++)
	{
		scanf("%s %s %d %d",student[i].name,student[i].roll_num,&student[i].age,&student[i].marks);
	}

	//print the details of each student 
	for(int j=0;j<n;j++)
	{
		printf("%s\n%s\n%d\n%d\n",student[j].name,student[j].roll_num,student[j].age,student[j].marks);
	}
	return 0;
}

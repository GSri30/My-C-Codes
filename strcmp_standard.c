// method(code) to use strcmp (standard function) in a code 
// strcmp is used to compare two given strings

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	char first[]="abdf";
	char second[]="abef";

	int result=strcmp(first, second);
	printf("%d",result);
		



return 0;}

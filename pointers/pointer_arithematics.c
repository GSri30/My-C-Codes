//Write a (C) program that takes as input the names of 10cities (names containing at least 10 characters). Construct a new 10 characterstring that has the first character of the first city name, second character ofthe second one and so on, in that order.  Allocate dynamic memory for thecity  names.   Use  pointer  arithmetic  to  access  the  appropriate  character  ineach name.


#include<stdio.h>
#include<stdlib.h>

int main()
{
	int column=10;
	char*result=(char*)calloc(10,sizeof(char));
	for(int i=0;i<10;i++)
	{
		char *data=(char*)calloc(column,sizeof(char));
		scanf("%s",data);
		*(result+i)=*(data+i);
		free(data);
	}
	printf("%s",result);
	free(result);
	return 0;
}

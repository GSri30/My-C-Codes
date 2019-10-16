// make your own strncat function which takes 3 inputs and returns the concatenated string (only upto specific letter)


#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void strncat_mine(char*s,char*t,int n)
{
	s+=strlen(s);
	int temp=0;
	if(n>strlen(t))
	{
		printf("Invalid");
	}
	for(int i=0;i<n;i++)
	{
		*s=*t;
		s++;
		t++;
		temp++;
	}
	s=s-temp-strlen(s);
}

int main()
{
	int length=255;
	int n;
	char*s=(char*)calloc(length,sizeof(char));
	char*t=(char*)calloc(length,sizeof(char));
	scanf("%s",s);
	scanf("%s",t);
	scanf("%d",&n);
	
	strncat_mine(s,t,n);
	printf("%s",s);

	free(s);free(t);
	return 0;	
}

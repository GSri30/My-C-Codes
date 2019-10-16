// Make your own strncmp function which compares the two strings upto n letters and gives appropriate output


#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int strncmp_mine(char*s1,char*s2,int n)
{
	int count=0;
	int ans;
	for(int i=0;i<n;i++)
	{
		if(*(s1+i)==*(s2+i))
		{
			count++;
			if(count==n)
	                {
        	                ans=0;
                	}

		}
		else
		{
			ans=*(s1+i)-*(s2+i);
			break;
		}
	}
	return ans;
}

int main()
{
	int length=100;
	int n;
	char*s1=(char*)calloc(length,sizeof(char));
	char*s2=(char*)calloc(length,sizeof(char));
	scanf("%s",s1);
	scanf("%s",s2);
	scanf("%d",&n);

	int answer=strncmp_mine(s1,s2,n);
	printf("%d",answer);
	free(s1);free(s2);
	return 0;
}

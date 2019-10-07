/*to get string input from user with spaces */

#include<stdio.h>
#include<string.h>

int main()
{
	char sentence;
	scanf("%[^\n]%*c",&sentence);
	printf("%s", sentence);



	return 0;
}

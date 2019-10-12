// Tower of hanoi is one of the standarad problems which a beginner should go through it atleast once
// follow: https://www.youtube.com/watch?v=YstLjLCGmgg


#include<stdio.h>

char tower_of_hanoi(int n,char from,char to,char left)
{
	if(n==1)
	{
		printf("move disc 1 from %c to %c\n",from,to);
		return 0;
	}

	tower_of_hanoi(n-1,from,left,to);
	printf("move disc %d from %c to %c\n", n,from,to);
	tower_of_hanoi(n-1,left,to,from);

}

int main()
{
	int n=3;
	tower_of_hanoi(n,'A','C','B');
	return 0;
}

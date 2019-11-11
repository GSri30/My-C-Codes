#include<stdio.h>
#include<stdarg.h>

int sum(int n,...)
{
	va_list lst;
	int sum=0;
	va_start(lst,n);
	for(int i=0;i<n;i++)
	{
		sum+=va_arg(lst,int);
	}
	va_end(lst);
	return sum;
}

int main()
{
	printf("%d",sum(4,1,2,3,4));
	return 0;
}

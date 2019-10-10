// code to convert a number to a binary


#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int main()
{
int n,rem,i=0,j;
int array[8]={0};
scanf("%d",&n);
while (n>0)
{
    rem=n%2;
    array[i]=rem;
    n=abs(n/2);
    i++;
}

for(j=i-1;j>=0;j--)
{
    printf("%d",array[j]);
}
return 0;
}

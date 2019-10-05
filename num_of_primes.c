// Code to find number of primes less than a given number


#include <stdio.h>

int main() 
{
int a=0,n,i,j;
scanf("%d",&n);
for (i=1;i<=n;i++)
{ 
  for (j=2;j<=n;j++)
  { 
    if(i%j==0)
    break;
  }
  if(i==j)
  a++;
}
  printf("%d",a);
  return 0;
}

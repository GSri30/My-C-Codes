// Code to find the GCD of two given numbers
// This problem can be solved in two methods
// one is done below
// the other is using euclids algorithm


#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,i,A,B,gcd;
    scanf("%d" "%d",&A,&B);
    a=abs(A);
    b=abs(B);

if (a==0 && b==0)
{
    printf("Invalid input");
}
else if (a==0 && b!=0)
{
    printf("%d\n",b);
}
else if (a!=0 && b==0)
{
    printf("%d\n",a);
}
else if (a%b==0)
{
    printf("%d\n", b);

}
else
{
    for (i=1;i<=a && i<=b;i++)
    {
        if(a%i==0 && b%i==0)
        {   gcd=i;
        }
    }
    printf("%d\n", gcd);
}
return 0;
}



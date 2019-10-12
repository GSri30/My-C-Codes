// code to find the sum of all the digits of a given number
// example: input: 237
//          output: 12

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, sum=0, unit;
    scanf("%d",&n);
    while (n>0)
    {
        unit=n%10;
        sum += unit;
        n = n/10;
    }
    printf("%d",sum);
    return 0;
}

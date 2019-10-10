// code to find the max and min of a given array

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int max, min;
    int a[6]={3,4,5,6,23,6};
    max=a[0];
    min=a[0];
    int i=1;
    while(i<=5)
    {
        if (a[i]<=min)
        {
            min=a[i];
        }
        else if (a[i]>=max)
        {
            max=a[i];
        }
        else
        {
            break;
        }
        i++;

    }
    printf("%d %d", min,max);
    return 0;
}

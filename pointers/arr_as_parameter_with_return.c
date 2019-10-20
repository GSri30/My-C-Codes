#include<stdio.h>

int*increase(int* arr,int n)
{
        for (int i=0;i<n;i++)
        {
                *(arr+i)+=1;
        }
        return arr;
}

int main()
{
        int array[]={1,2,3,4,5,6};
        int l=sizeof(array)/sizeof(array[0]);
        int* ptr=increase(array,l);
        for(int j=0;j<6;j++)
        {
                printf("%d",*(ptr+j));
        }
        return 0;
}


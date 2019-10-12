// code to find the number of distinct substrings using a single array
// This method is also refered as 'window slinding'


#include<stdio.h>
#include<string.h>

int main()
{
        int i,j,s,count2=0,count;
        char l[100];
        scanf("%s",l);
        scanf("%d",&s);
        int n = strlen(l)-s+1;
        char arr[n][s];
        for(i=0;i<n;i++)
        {
                for(j=0;j<s;j++)
                {
                        arr[i][j]=l[i+j];
                }
                arr[i][j]='\0';
        }
	for(int j=0;j<((strlen(l)-s+1)*s);j+=s)
        {
                for(int i=1;i<=strlen(l)-s-j/s;i++)
                {
                        count=0;
                        for(int k=j;k<j+s;k++)
                        {
                                if(arr[0][k]==arr[0][k+s*i])
                                {
                                        count++;
                                }
                        }
                        if(count==s)
                        {
                                count2++;
                                break;
                        }
                }
        }
        printf("%d",n-count2);
	return 0;
}



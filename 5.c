#include<stdio.h>
#include<stdlib.h>
int main()
{
    int degree1,degree2;
    scanf("%d",&degree1);
    int*poly1=(int*)calloc(10,sizeof(int));
    int*poly2=(int*)calloc(10,sizeof(int));
    for(int i=0;i<degree1+1;i++)
    {
        scanf("%d",(poly1+i));
    }
    scanf("%d",&degree2);
    for(int j=0;j<degree2+1;j++)
    {
        scanf("%d",(poly2+j));
    }

    int*addPoly=(int*)calloc(10,sizeof(int));
    int maxDegree;
    if(degree1>degree2)
    {
        maxDegree=degree1;
    }
    else
    {
        maxDegree=degree2;
    }
    
    for(int k=0;k<maxDegree+1;k++)
    {
        *(addPoly+k) = *(poly1+k) + *(poly2+k);
    }
    
    int*multiplyPoly=(int*)calloc(99,sizeof(int));
    for(int a=0;a<degree1+1;a++)
    {
        for(int b=0;b<degree2+1;b++)
        {
            *(multiplyPoly+a+b)+=*(poly1+a)* *(poly2+b);
        }
    }

    printf("%d ",maxDegree);
    for(int l=0;l<maxDegree+1;l++)
    {
        printf("%d ",*(addPoly+l));
    }
    printf("\n");
    printf("%d ",degree1*degree2);
    for(int c=0;c<degree1*degree2+1;c++)
    {
        printf("%d ",*(multiplyPoly+c));
    }    
    
    free(poly1);
    free(poly2);
    free(multiplyPoly);
    free(addPoly);
    return 0; 
}

// Code to find the roots of a given quadratic equation

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    double a, b, c, d;
    double x1, x2;

    scanf("%lf",&a);
    scanf("%lf",&b);
    scanf("%lf",&c);
if (a!=0)
{
    d=((b*b)-(4*a*c));

    if (d>=0)
{

        x1= ((-b)+sqrt(d))/(2*a);
        x2= ((-b)-sqrt(d))/(2*a);
        printf("%.2lf %.2lf\n",x1,x2);
}
    else
{
        printf("%.2f+i%.2f\n",(-b/(2*a)),((sqrt(-d))/(2*a)));
        printf("%.2f-i%.2f\n",(-b/(2*a)),((sqrt(-d))/(2*a)));

}

}

    return 0;
}

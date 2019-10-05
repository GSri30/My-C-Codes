// Code to find if the two circles (given their radii and centers) intersect or not
// if one circle is completely inside the other, then consider them as non-intersecting


#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main()
{
	int x1,y1,x2,y2,r1,r2;
	//x1,y1,x2,y2 are coordinates and r1 and r2 are radii
	scanf("%d %d %d %d %d %d", &x1,&y1,&x2,&y2,&r1,&r2);
	double dist;
	int sum_radius=r1+r2;
	int diff_radius=abs(r1-r2);
	dist=sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1));
	if (r1>=0 && r2>=0)
	{
	//distance between two circles should be less than the sum of their radii
	//even distance between two circles should not be less than the difference between their radii as if one circle is inside the other,they are non-intersecting
		if (dist<=sum_radius && dist>=diff_radius)
		{	
			printf("YES");
		}
		else
		{
			printf("NO");
		}
	}
	else
	{
		printf("Invalid input");
       	}	
	
	
	return 0;	
}

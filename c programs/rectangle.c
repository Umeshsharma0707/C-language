#include<stdio.h>

main()
{
	float length,width,ans;
	
	printf("\nenter length:");
	scanf("%f",&length);
	
	printf("\nenter width:");
	scanf("%f",&width);
	
	ans=length*width;
	
	printf("\n area of rectangle : %f",ans);
	
//	area of traiangle
	float height,base;
	printf("\nenter height:");
	scanf("%f",&height);
	
	printf("\nenter base:");
	scanf("%f",&base);
	
	ans=height*base/2;
	
	printf("\n area of triangle: %f",ans);
	
	
}
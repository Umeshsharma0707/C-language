#include<stdio.h>

main()
{
		
	int m1,m2,m3,m4,m5,sum,percent;
	
	printf("\n Enter marks 1:");
	scanf("%d",&m1);
	
	printf("\n Enter marks 2:");
	scanf("%d",&m2);
	
	printf("\n Enter marks 3:");
	scanf("%d",&m3);
	
	printf("\n Enter marks 4:");
	scanf("%d",&m4);
	
	printf("\n Enter marks 5:");
	scanf("%d",&m5);
	
	
	sum=m1+m2+m3+m4+m5;
	percent=sum/5;
	printf("\n total is :%d",sum);
	printf("\n percent %d",percent);
		
		
	if(percent>90)
	{
		printf("Distinction\n");
	}
	else if(percent>60)
	{
		printf("\n first class");
	}
	else if(percent>35)
	{
		printf("\n just pass");
		
		
	}
	else {
		printf("\n you are fail");
	}
}




















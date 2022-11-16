#include<stdio.h>

main()
{
	
	int age;
	printf("enter your age\n");
	scanf("%d",&age);
	
	if(age>=18)
	{
		printf("you are eligible\n");
	}
	else
	{
		printf("\n you are not eligible");
	}
}
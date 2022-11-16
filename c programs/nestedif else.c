#include<stdio.h>

main()
{

int a,b,c;

printf("\n enter a:");
scanf("%d",&a);

printf("\n enter b:");
scanf("%d",&b);

printf("\n enter c:");
scanf("%d",&c);

if(a>b)
{
	if(a>c)
	{
		printf("\n a is largest");
	}
	else
	{
		printf("\n c is largest");
	}
}
else
{
	if(b>c)
	{
		printf("\n b is largest");
		
	}
	else
	{
		printf("\n c is largest");
	}
}


}
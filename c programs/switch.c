#include<stdio.h>

main()
{
	
	
	int a,b,ans;
	char n; 
	
	printf("enter a: \n");
	scanf("%d",&a);
	printf("enter b: \n");
	scanf("%d",&b);
	
	printf("\n select the operator to perform: ");
	printf("\n a.addition \nb.substract \nc.multiply \nd.divide\n\n");
	
	fflush(stdin);
	scanf("%c",&n);
	
	switch (n)
	
	{
		case 'a':
			printf("\n addition= %d",a+b);
		break;
		case 'b':
			printf("\n substract= %d",a-b);
		break;
		case 'c':
			printf("\n multiply = %d",a*b);
		break;
		case 'd':
			printf("\n divide= %d",a/b);
		break;
		default:
			printf("\n invalid");
	}
}
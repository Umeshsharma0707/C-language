#include<stdio.h>

main()
{
	
float principal,interest,time,amount;

printf("\n enter principal:");
scanf("%f",&principal);

printf("\n enter interest:");
scanf("%f",&interest);

printf("\n enter time:");
scanf("%f",&time);

amount=principal*(1+interest*time);

printf("the final amount:%f",amount);


}
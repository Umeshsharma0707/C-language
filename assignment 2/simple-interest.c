#include<stdio.h>
main()
{
   
    printf("simple interest\n");

    float amount,principal,interest,time;

    printf("enter principal:");
    scanf("%f",&principal);
    printf("enter interest:");
    scanf("%f",&interest);
    printf("enter time:");
    scanf("%f",&time);
    
    amount=(principal*interest*time)/100;
    printf("final amount=%f",amount);
}
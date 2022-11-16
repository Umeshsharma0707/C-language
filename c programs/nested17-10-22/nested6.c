#include<stdio.h>
main()
{
    int i,j,k;
    for(j=1;j<=4;j++)
    {
        
    for(i=1;i<=j;i++)
    {
        printf("*");
    }
    printf("\n");
    }

   for(j=1;j<=5;j++)
    {
        
    for(i=5;i>=j;i--)
    {
        printf("*");
    }
    printf("\n");
    }


}
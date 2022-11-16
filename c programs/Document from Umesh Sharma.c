#include<stdio.h>
#include<conio.h>
void main()
{
       int a[2][2]={{1,2},{3,4}};
       int b[2][2]={{5,6},{7,8}};
       int c[2][2];
       clrscr();
       int i,j;
       printf("-----A-----\n")
       for(i=0;i<2;i++)
       {
	      for(j=0;j<2;j++)
	      {
		 printf("%d\n",a[i][j]);

	      }
       }
	printf("--------B-----\n");
	for(i=0;i<2;i++)
       {
	      for(j=0;j<2;j++)
	      {
		 printf("%d\n",b[i][j]);

	      }
       }
       printf("----------sum-------\n");
	for(i=0;i<2;i++)
       {
	      for(j=0;j<2;j++)
	      {
			c[i][j]=a[i][j]+b[i][j];
	      }
       }
	for(i=0;i<2;i++)
       {
		printf("\n");
	      for(j=0;j<2;j++)
	      {
			printf("%d\t",c[i][j]);
	      }
       }

	   getch();
}
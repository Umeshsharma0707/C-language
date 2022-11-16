#include<stdio.h>

main()
{
		int a,b,c;
		a=5;
		b=85;
		c=55;
		
		(a>b)?((a>c)?printf("a is graeter"):printf("c is grater")):
			((b>c)?printf("b is greater"):printf("c is graeter"));
}
#include<stdio.h>

main()
{
	char sum;
	printf("enter any alphabet\n");
	scanf("%c",&sum);
	
	if(sum=='a'||sum=="e"||sum=="i"||sum=="o"||sum=="u"||sum=="A"||sum=="E"||sum=="I"||sum=="O"||sum=="U")
	{
		printf("\n enter value is vowel");
		
	}
	else
	{
		printf("\n character is consonent");
	}
}
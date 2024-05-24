#include<stdio.h>

int main()
{
	char ch;
	printf("\nENTER OPERATORE=\n");
	scanf("%c",&ch);
	int a;
	int b;
	int result;
	printf("\n ENTER TWO NUMBER\n");
	scanf("%d%d",&a,&b);
       	if(ch=='+')
	{
		result=a+b;
		printf("\nSum=%d",result);
	}
	else if(ch=='-')
	{
		result=(a>b)?a-b:b-a;
		printf("\nDifference=%d",result);
	}
	else if(ch=='/')
	{
		result=(a>b)?a/b:b/a;
		printf("\n Division=%d",result);
	}
	else if(ch=='*')
	{
		result=a*b;
		printf("\nMultiplication=%d",result);
	}
	else 
		printf("\nINVALID INPUT ");
	return 0;
}



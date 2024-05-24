#include<stdio.h>

int main()
{
	printf("Enter a Number=");
	int a;
	scanf("%d",&a);
	if(a&1==1)
		printf("\n It is a odd Number\n");
	else
		printf("\n It is a even Number\n");
	return 0;
}


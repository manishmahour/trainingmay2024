#include<stdio.h>

int main()
{
	printf("\n Enter Three Numbers=");
	int a;
	int b;
	int c;
	scanf("%d%d%d",&a,&b,&c);
	int lar=(a>b)?((a>c)?a:c):((b>c)?b:c);
	printf("\n Largest Number=%d",lar);
	return 0;
}


#include<stdio.h>

int main()
{
	int temp;
	printf("\n Enter Temperatue=\n");
	scanf("%d",&temp);
	if(temp>30)
		printf("\n Its hot outside, stay hydrated!\n");
	else if(temp>=20&&temp<=30)
		printf("\n The weather is nice and warm\n");
	else if(temp>=10&&temp<=19)
		printf("\nIts a bit chilly, wear a jacket.\n");
	else 
		printf("\nIts cold outside, stay warm!\n");

	return 0;
}


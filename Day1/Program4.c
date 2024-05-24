#include<stdio.h>
#include<math.h>
int power(int a);
int main()
{
	printf("Enter Number in binary=");
	int  bin;
	scanf("%dfloat",&bin);
	float sum=0;
	int count=0;
	while(bin>0)
	{
		int r=bin%10;
		if(r==1)
		{
			sum=sum+power(count);
		}
		bin=bin/10;
		count++;
	}
	printf("\n Decimal value=%f\n", sum);
	return 0;
}

int power(int a)
{
	int mult=1;
	for(int i=0;i<a;i++)
	{
		mult=mult*2;
	}
	return mult;
}

		





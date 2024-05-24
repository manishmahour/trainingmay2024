#include<stdio.h>

int main()
{
	printf("\nEnter temperature in Celcuis=");
	float t;
	scanf("%f",&t);
	float feh=9/5*t+32;
	printf("\n Temperatue in Fehrenheit=%f f\n",feh);
	return 0;
}


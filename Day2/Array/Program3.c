#include<stdio.h>
#include<stdlib.h>
#define SIZE 5
int main()
{
int arr[SIZE];

printf("\n Enter the 5 Elements:-\n");
       for(int i=0;i<SIZE;i++)
       {
	scanf("%d",&arr[i]);
       }
printf("\nElements of Array in Reverse Order are:-\n");
	for(int i =SIZE-1;i>=0;i--)
	{
		printf("%d  ",arr[i]);
		}
	return EXIT_SUCCESS;
}


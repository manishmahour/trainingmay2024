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
printf("\nElements of Array in Ascending Order are:-\n");
	for(int i=0;i<SIZE;i++)
	{
		for(int j=i+1;j<SIZE;j++)
		{
			if(arr[i]>arr[j])
			{
				int temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	for(int i=0;i<SIZE;i++)
	{
		printf("%d ",arr[i]);
	}

	return EXIT_SUCCESS;
}


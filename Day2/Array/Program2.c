#include<stdio.h>
#include<stdlib.h>
#define SIZE 5

int main()
{
	int arr[SIZE];
	printf("\n ENTER THE ELEMENTS OF ARRAY:-\n");
	for(int i=0; i<SIZE; i++)
	{
	  scanf("%d",&arr[i]);
	}
	printf("\n ENTER KEY TO SEARCH\n");
	int key;
	scanf("%d",&key);
	int i;
	for(i=0;i<SIZE;i++)
	{
		if(key==arr[i])
			printf("KEY FOUNDED!\n");
	}
	if(i==SIZE)
		printf("KEY NOT FOUNDED!\n");

	return EXIT_SUCCESS;
}

		

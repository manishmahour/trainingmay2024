#include<stdio.h>

int main()
{
	int marks;
	printf("\n Enter MARKS=\n");
	scanf("%d",&marks);
	if(marks>=90&&marks<=100)
		printf("\nGrade=A\n");
	else if(marks>=80&&marks<=89)
		printf("\nGrade=B\n");
	else if(marks>=70&&marks<=79)
		printf("\nGrade=C\n");
	else if(marks>=60&&marks<=69)
		printf("\nGrade=D\n");
	else
		printf("\nGrade=F\n");
	return 0;
}

//program to find greater number between two number.
#include<stdio.h>
#include<conio.h>

void main()

{
	int no1,no2;
	clrscr();

	printf("Enter a no1:");
	scanf("%d",&no1);

	printf("Enter a no2:");
	scanf("%d",&no2);

	if(no1>no2)
	{
	    printf("no1 is greater.");
	}
	else
	{
	   printf("no2 is greater.");
	}

	getch();
}
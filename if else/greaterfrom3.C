//program to find out greater number between three number.

#include<stdio.h>
#include<conio.h>

void main()

{
	int no1,no2,no3;
	clrscr();

	printf("Enter no1:");
	scanf("%d",&no1);
	printf("Enter no2:");
	scanf("%d",&no2);
	printf("Enter no3:");
	scanf("%d",&no3);

	if(no1>no2 && no1>no3)
	  printf("no1 is greater.");
	else if(no2>no3)
	  printf("no2 is greater.");
	else
	  printf("no3 is greater.");

	  getch();
}
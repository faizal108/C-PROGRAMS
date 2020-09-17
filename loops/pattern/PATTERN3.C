/*Expecting output solid square
@@@@@
@@@@@
@@@@@
@@@@@
@@@@@
===================================================================================*/

#include<stdio.h>
#include<conio.h>

void main()

{
	int n,i,j;
	clrscr();

	printf("Enter number for square pattern?\n");
	printf("\nEnter no::");
	scanf("%d",&n);

	printf("\n");

	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
		  printf("@");
		}

	   printf("\n");
	}

	getch();
}

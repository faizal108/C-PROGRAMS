#include<stdio.h>
#include<conio.h>

void main()

{
	int n,i,j;
	clrscr();

	printf("Enter number for frame pattern?\n\n");

	printf("Enter a number::");
	scanf("%d",&n);

	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(i==1||i==n||j==1||j==n||i==2||i==n-1||j==2||j==n-1||i==3||i==n-2||j==3||j==n-2)
			{
			 printf("* ");
			}
			else
			{
			 printf("  ");
			}
		}

		printf("\n");
	}

	getch();
}
#include<stdio.h>
#include<conio.h>

void main()

{
	int n,i,j,k;
	clrscr();

	printf("Enter a number for pyramid pattern.\n");

	printf("enter number::");
	scanf("%d",&n);

	for(i=1;i<=n;i++)
	{
		for(j=n;j>i;j--)
		{
		    printf(" ");
		}

		for(k=1;k<=i;k++)
		{
		    printf("* ");
		}

		printf("\n");
	}

	getch();
}
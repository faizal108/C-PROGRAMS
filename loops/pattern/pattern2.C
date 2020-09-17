#include<stdio.h>
#include<conio.h>

void main()

{
	int n,i,j,k;
	clrscr();

	printf("Enter a number::");
	scanf("%d",&n);

	for(k=1;n>0;n--,k++)
	{
		for(i=1;i<n;i++)
		{
		 printf(" ");
		}
		for(j=1;j<=k;j++)
		{
		 printf("*");
		}
	  printf("\n");
	}

	getch();
}
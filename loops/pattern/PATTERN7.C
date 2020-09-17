/*Excepting output right angle triangle
EX:user enter:4
our output:
1
2 3
4 5 6
7 8 9 10
==============================================================================*/
#include<stdio.h>
#include<conio.h>

void main()

{
	int n,i,j,k=0;
	clrscr();

	printf("Enter a number::");
	scanf("%d",&n);

	for(i=1;i<=n;i++)
	{
	   for(j=1;j<=i;j++)
	   {
	      k++;
	      printf("%d ",k);
	   }

	   printf("\n");
	}
	getch();
}

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
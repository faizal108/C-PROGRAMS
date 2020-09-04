#include<stdio.h>
#include<conio.h>

void main()

{
	int no,r,sum;
	clrscr();

	printf("Enter a number:: ");
	scanf("%d",&no);

	for(sum=0;no>0;no/=10)
	{
	   r=no%10;
	   sum+=r;
	}

	printf("\n sum=%d",sum);

	getch();
}
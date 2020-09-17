/*Expecting output
*
**
***
****
end so on
============================================================================================================================*/
#include<stdio.h>
#include<conio.h>

void main()

{
	int no,c,t;
	clrscr();

	printf("Enter number for pattern:");
	scanf("%d",&no);

	for(c=no;c>0;c--)
	{
		for(t=c;t>0;t--)
		{
		 printf("* ");
		}

		printf("\n");
	}
	getch();
}

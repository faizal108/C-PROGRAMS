//program to display n even number..

#include<stdio.h>
#include<conio.h>

void main()

{
	int no,c;
	clrscr();

	printf("Enter number to find even numer till given number.\n");
	printf("Enter a number::");
	scanf("%d",&no);

	for(c=1;c<=no;c++)
	{
		if((c&1)==0)
		printf(" %d\n",c);
	}

	getch();
}
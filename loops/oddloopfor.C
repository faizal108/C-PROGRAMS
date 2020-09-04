//program to make sum of given odd number.

#include<stdio.h>
#include<conio.h>
void main()

{
	int no,c,sum=0;
	clrscr();

	printf("sum of given odd number?\n");
	printf("Enter a number::");
	scanf("%d",&no);

	for(c=1;c<=no;c++)
	{
		if(c&1!=0)
		sum+=c;
	}

	printf("%d",sum);

	getch();
}
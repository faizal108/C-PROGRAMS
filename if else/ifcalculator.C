#include<stdio.h>
#include<conio.h>

void main()

{
	long int no1,no2;
	int sign;
	clrscr();

	printf("Enter no1:");
	scanf("%ld",&no1);

	printf("Enter no2:");
	scanf("%ld",&no2);

	printf(":press:\n1 for +.\n2 for -.\n3 for *.\n4 for /.\n");
	printf("Enter your choice:");
	scanf("%d",&sign);

	if(sign==1)
	  printf("\n   Addition= %ld",no1+no2);
	else if(sign==2)
	  printf("\n   Subtraction= %ld",no1-no2);
	else if(sign==3)
	  printf("\n   multiplication= %ld",no1*no2);
	else if(sign==4)
	  printf("\n   dividion= %ld",no1/no2);
	else
	  printf("\n   Invalid input.");

	 getch();

}
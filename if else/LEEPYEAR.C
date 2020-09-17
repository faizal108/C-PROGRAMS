//program to find weather a year is leep or not?

#include<stdio.h>
#include<conio.h>

void main()
{
	int year;
	clrscr();

	printf("enter year:");
	scanf("%d",&year);

	if(year%400==0)
	printf("leep year.");
	else if(year%100==0)
	printf("not leep year.");
	else if(year%4==0)
	printf("leep year.");
	else
	printf("not leep year.");

	getch();
}
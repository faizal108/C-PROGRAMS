//program to calculate grade on following criteria.
//     percent        grade
//     >=90             A
//     >=70 & <90       B
//     >=55 & <70       c
//     >=40 & <55       d
//      <40             fail
//--------------------------------------------------------------------------------

#include<stdio.h>
#include<conio.h>

void main()
{
	int per;
	clrscr();

	printf("Enter percent:");
	scanf("%d",&per);

	if(per>=90)
	 printf(" grade=A");
	else if(per>=70 && 90)
	 printf(" grade=B");
	else if(per>=55 && per<70)
	 printf(" grade=C");
	else if(per>=40 && per<55)
	 printf(" grade=D");
	else
	 printf(" fail");

	 getch();
}
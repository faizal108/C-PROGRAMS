#include<stdio.h>
#include<conio.h>

void main()
{
	int n,i,j,k,dic=0;
	int a[5];

	clrscr();

	printf(" Enter your array length:");
	scanf("%d",&n);
	k=n-1;

	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	do{
	printf("================MENU===============\n\n");
	printf("::PRESS::\n[1] for add a number.\n[2] for delete a number.\n[3] for show your result.\n==>");
	scanf("%d",&dic);

	switch(dic)
	{
		case 1: if(n<5)
			{
			  printf("Which number you want to add:");
			  scanf("%d",&j);

			  a[n]=j;
			  n+=1;
			}
			else
			  printf("\nError: array stack overflow.\n");


			printf("\n===>");
			for(i=0;i<n;i++)
			{
			  printf("%d ",a[i]);
			}
			break;


		case 2:

			for(i=0;i<k;i++)
			{ printf("%d ",a[i]);
			}
			k--;
			break;

		case 3: for(i=0;a[i]!='\0';i++)
			{
			   printf("%d ",a[i]);
			}
			break;

		default : printf("\n\n WRONG INPUT.");
	}
	printf("\n\n [4] for continue:");
	scanf("%d",&dic);
	if(dic!=4)
	 printf("\n  WRONG INPUT BYEE :)\n");
	}while(dic==4);
	getch();
}

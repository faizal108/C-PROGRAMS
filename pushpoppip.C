#include<stdio.h>
#include<conio.h>

void main()
{
	int n,i,j,k,dic=0;
	int a[100];

	clrscr();

	printf(" Enter your array length:");
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
         K=n;
	do{
	printf("================MENU===============\n\n");
	printf("::PRESS::\n[1] for add a number.\n[2] for delete a number.\n[3] for show your result.\n==>");
	scanf("%d",&dic);

	switch(dic)
	{
		case 1: if(k<100)
			{
			  printf("Which number you want to add:");
			  scanf("%d",&j);

			  a[k]=j;
			  K++;
                          Printf("Your change has been successful.\n");
			}
			else
			  printf("\nError: array stack overflow.\n");
			break;


		case 2: k--;
                        Printf("Your change has been successful.");
			break;

		case 3: for(i=0;i<k;i++)
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

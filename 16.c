//Read numbers from user and display their total. Take input till user enters 0.

#include<stdio.h>
#include<conio.h>
void main()
{
	int sum=0,num;
	clrscr();
	while(num != 0)
	{
		printf("Enter a number :  ");
		scanf("%d",&num);
		sum=sum+num;
	}
	printf("\nSum of the entered  numbers : %d ", sum);
	getch();
}

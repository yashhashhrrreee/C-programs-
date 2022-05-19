/*
Write program to print following pattern
1 2 3 4 5
2 1 3 4 5
2 3 1 4 5
2 3 4 1 5
2 3 4 5 1
*/

#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j;
    clrscr();
    for(i=2;i<=6;i++)
    {
	for(j=2;j<i;j++)
	{
	    printf("%d", j);
	}

	printf("1");

	for(j=i;j<6;j++)
	{
	    printf("%d", j);
	}

	printf("\n");
    }
    getch();
}

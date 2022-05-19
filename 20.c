//Write program to read and display names of 5 persons. Separate name, middle name and last name of each person and display.

#include<stdio.h>
#include<conio.h>
void main()
{
	struct names
	{
		char name[50];
	} arr[5];
	int i;
	clrscr();
	for(i = 0; i < 5; i++)
	{
		printf("Enter name of Person %d\n", i + 1);
		gets(arr[i].name);
	}
	printf("Names of the people are :\n");
	for(i = 0; i < 5; i++)
	{
		printf("%s\n", arr[i].name);
	}
	getch();
}

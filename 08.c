/*
Write program for parking
if vehicle is 2 wheeler
	for 1 hr 2rs
	for 5 hr 5 rs
	for 1 day 10 rs
if 4 wheeler
	for 1 hr 5rs
	for 5 hr 20 rs
	for 1 day 100 rs
( For 7Hr 2 Wheeler amount is 5 Rs+4 RS = 9Rs)
*/

#include<stdio.h>
#include<conio.h>
int main()
{
	int vehicle,rate=0;
	int time,x,y;
	printf("enter your type of vehicle:\n 1: for 2 wheeler\n 2: for 4 wheeler\n");
	x=scanf("%d",&vehicle);
	if(x!=1)
	{
		printf("pls enter a valid no");
		exit();
	}
	if(vehicle!=1 && vehicle!=2)
	{
		printf("invalid no entered");
		exit();
	}
	printf("enter the time in hrs ur vehicle is parked for:\n");
	y=scanf("%d",&time);
	if(y!=1)
	{
		printf("pls enter a valid no");
		exit();
	}
	if(vehicle==1)
	{
		rate=(((time/24)*10)+(((time%24)/5)*5)+(((time%24)%5)*2));
	}
	else
	{
		rate=(((time/24)*100)+(((time%24)/5)*20)+(((time%24)%5)*5));
	}
	printf("the total bill in rupees is %d", rate);
	getch();
}


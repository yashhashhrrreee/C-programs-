/*Write program to get marks of 5 subjects. Print total and percentage.
If marks percentage is 
<45 print FAIL
>45 and <60 Second Class
>60 and <75 First Class
>75 Distinction
=100 print Gold Medalist */


#include<stdio.h>

void main()
{
    float total=0;
    int k,marks,a;
    float percentage;

    for(k=1;k<=5;k++)
    {
        printf("enter the marks of subject %d : ",k);
        a=scanf("%d", &marks);

        if(a!=1)
        {
            printf("Enter a valid no");
            exit(0);
        }
        total+=marks;
    }
    percentage=(total/5.0);
    printf("percentage is %f,\n", percentage);

    if(percentage<45)
        printf("FAIL");

    else if(percentage>=45 && percentage<60)
        printf("SECOND CLASS");

    else if(percentage>=60 && percentage<75)
        printf("FIRST CLASS");

    else if(percentage>=75 && percentage<=99)
        printf("DISTINCTION");

    else if(percentage=100)
        printf("GOLD MEDALLIST");

}

/*
Write program to print 2 to 10 table vertically(Table of 2 in first column,
table of 3 in next likewise).
*/
#include<stdio.h>
int main()
{
    for(int i=2; i<=10; i++){
        for(int j=2; j<=10; j++){
            printf("%2d X %d =%3d, ", i, j, i*j);
        }
        printf("\n");
    }
    return(0);
}

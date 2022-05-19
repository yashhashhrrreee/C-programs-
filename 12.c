/*
Write program to print following pattern
H H H H H
F F F F
D D D
B 
*/

#include<stdio.h>

void main()
{   int i,j;
    char ch;
    for(ch=73;ch>=66;ch--)
    {
        ch--;

        for(j=ch+2;j>=66;j--)
        {
            j--;
            printf("%c", ch);
        }

            printf("\n");

    }

}

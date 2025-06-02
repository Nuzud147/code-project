/*
19. Number Pyramid Pattern
a. Write a C program that prints a number pyramid
*/
#include<stdio.h>
int main ()
{
    int rows;
    scanf("%d",&rows);
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<(rows-i)-1;j++)
        {
            printf(" ");
        }
        for(int j=1;j>=1;j--)
        {
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}

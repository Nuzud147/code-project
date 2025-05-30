/*
18. Floyd’s Triangle Pattern
a. Write a C program that prints Floyd’s triangle.
*/
#include<stdio.h>
int main ()
{
    int n,num=1;
    scanf("%d",&n);

    for(int i = 1;i <= n;i++)
    {
        for(int j = 1;j <= i;j++)
        {
            printf("%d\n",num);
            num++;
        }
        printf("\n");
    }
    return 0;
}

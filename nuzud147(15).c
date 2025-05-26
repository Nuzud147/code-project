/*
15. Problem: Counting Digits
a. Write a program to count the number of digits in an integer using a while loop.
*/
#include<stdio.h>
int main()
{
    int n,count=0;
    scanf("%d",&n);

    while(n!=0)
    {
        n/=10;
        count++;
    }
    printf("%d\n",count);
    return 0;
}

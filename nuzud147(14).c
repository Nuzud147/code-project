/*14. Problem: Reverse a Number
a. Write a C program to reverse a given integer using a while loop.
*/
#include<stdio.h>
int main()
{
    int n,r=0;
    scanf("%d",&n);

    while(n>0)
    {
        r=r*10+n%10;
        n /= 10;
    }
    printf("%d\n",r);
    return 0;
}

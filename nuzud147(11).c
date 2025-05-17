/*11. Problem: Fibonacci Series
a. Write a C program to generate the Fibonacci series up to n terms using a for
loop.
*/
#include<stdio.h>
int main ()
{
    int n;
    int a=0,b=1,s;
    scanf("%d",&n);

    for(int i=0;i<n;i++)
    {
        printf("%d",a);
        s=a+b;
        a=b;
        b=s;
    }
    printf("\n");
    return 0;
}

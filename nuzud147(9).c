/*9.Problem: Multiplication Table
a. Write a C program to display the multiplication table of a given number using a
for loop.
*/
#include<stdio.h>
int main ()
{
    int n;
    scanf("%d",&n);

    for(int i = 1;i <= 10; i++)
    {
        printf("%d * %d = %d\n",n,i,n*i);

    }
    return 0;
}

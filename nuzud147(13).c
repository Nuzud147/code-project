/*13. Problem: Prime Number Checker
a. Write a C program to check whether a given number is prime or not using a for
loop and conditional statements.
*/
#include<stdio.h>
#include<math.h>
int main ()
{
    int n,c=0;
    float rt;
    scanf("%d",&n);
    rt=sqrt(n);
    for(int i=2;i<=rt;i++)
    {
        if(n%i==0)
        {
            c=1;
            break;
        }
    }
    (c<0)?printf("%d is not a Prime Number",n):printf("%d is a Prime Number",n);
    return 0;
}

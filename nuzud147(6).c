/*6.Problem: Positive, Negative or Zero
a. Write a C program that takes a number and determines whether it's positive,
negative, or zero using if-else statements.
*/
#include<stdio.h>
int main ()
{
    int x;
    scanf("%d",&x);
    if(x>0)
    {
        printf("Positive\n");
    }
    else if(x<0)
    {
        printf("Negative\n");
    }
    else
    {
        printf("Zero\n");
    }
    return 0;
}

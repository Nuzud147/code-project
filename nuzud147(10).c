/*10.Problem: Factorial Calculator
a. Write a program to calculate the factorial of a number using a while loop.
*/
#include<stdio.h>
int main()
{
    int a,count=1,i=1;
    scanf("%d",&a);

    while(count <= a)
    {
        i=i*count;
        count++;
    }
    printf("Factorial of %d is %d\n",a,i);
    return 0;
}

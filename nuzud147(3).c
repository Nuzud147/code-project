/*3. Problem: Largest of Three Numbers
a. Write a C program to find the largest of three numbers using nested if-else
conditions.
*/

#include<stdio.h>
int main ()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);

    if(a>b)
    {
        printf("%d is Largest\n",a);
    }
    else if(b>c)
    {
        printf("%d is Largest\n",b);
    }
    else
    {
        printf("%d is Largest\n",c);
    }
    return 0;
}




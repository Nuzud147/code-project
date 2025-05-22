/*8.Problem: Triangle Validity Checker
a. Write a program that takes the lengths of three sides of a triangle and determines
if the triangle is valid based on the conditions of a valid triangle using conditional
statements.
*/
#include<stdio.h>
int main ()
{
    float a,b,c;
    scanf("%f %f %f",&a,&b,&c);
    if(a + b > c && b + c > a && a + c > b)
    {
        printf("valid\n");
    }
    else
        printf("invalid\n");
    return 0;
}

/*4.Problem: Grade Calculator
a. Write a program that takes a score as input and assigns a grade (A, B, C, D, F)
using the switch-case statement.
*/
#include<stdio.h>
int main ()
{
    int m;
    scanf("%d",&m);

    switch(m/10)
    {
    case 10:
    case 9:
        printf("A\n");
        break;
    case 8:
        printf("B\n");
        break;
    case 7:
        printf("C\n");
        break;
    case 6:
        printf("D\n");
        break;
    default:
        printf("F\n");
    }
    return 0;
}

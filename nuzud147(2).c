/*
2. Problem: Leap Year Checker
a. Write a program that takes a year as input and checks whether it is a leap year or
not using if-else conditions.
*/
#include<stdio.h>
int main ()
{
    int Year;
    scanf("%d",&Year);
    if(Year%400==0)
        printf("Leap Year\n");
    else if(Year%100==0)
        printf("Not a Leap Year\n");
        else if(Year%4==0)
            printf("Leap Year\n");
        else
            printf("Not a Leap Year\n");
        return 0;

}



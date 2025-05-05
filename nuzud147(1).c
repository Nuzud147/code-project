/*Name:Nuzud Binte Olid
 Batch-61
 Section(C)
 ID:242-115-147
 */



/*1. Problem: Odd or Even
a. Write a C program to check whether a given number is odd or even using an
if-else statement.
    */
#include<stdio.h>
int main ()
{
    int a;
    scanf("%d",&a);
    if(a % 2 == 0)
    {
        printf("even\n");
    }
    else
        printf("odd\n");
    return 0;


    }

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


/*5.Problem: Vowel or Consonant
a. Write a program to check if a character is a vowel or a consonant using the
switch-case statement.
*/
#include<stdio.h>
int main ()
{
    char ch;
    scanf("%c",&ch);
    switch(ch)
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            printf("%c is vowel\n",ch);
            break;
        default:
            printf("%c is consonant\n",ch);
            break;

    }
    return 0;
}


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



/*7.Problem: Simple Calculator
a. Write a program to create a simple calculator using the switch-case
statement. The program should perform addition, subtraction, multiplication, and
division based on user input.
*/
#include<stdio.h>
int main ()
{


    float a,b;
    char operator;


    scanf("%c",&operator);
    scanf("%f%f%",&a,&b);

    switch(operator)
    {
        case '+':

            printf("%f\n",a+b);
            break;

        case '-':

            printf("%f\n",a-b);
            break;

        case '*':

            printf("%f\n",a*b);
            break;

        case '/':

            printf("%f\n",a/b);
            break;

        default:
            printf("Not a valid operator");
}
return 0;
}

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





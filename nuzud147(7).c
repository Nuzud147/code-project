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

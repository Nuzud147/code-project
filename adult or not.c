//Adult or Not using if-else statement
#include<stdio.h>
int main ()
{
    int age;
    scanf("%d",&age);

    if(age>18)
    {
        printf("Adult\n");
        printf("They can vote\n");
        printf("They can drive\n");
        //combination of statement used,it is called block
    }
    else
    {
        printf("Not Adult\n");
    }
    return 0;
}

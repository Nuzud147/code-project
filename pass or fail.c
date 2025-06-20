//to check if a student passed pr failed
#include<stdio.h>
int main ()
{
    int marks;
    printf("Enter marks(1-100) : \n");
    scanf("%d",&marks);

    if(marks<=30)
    {
        printf("Fail\n");
    }
    else if(marks>30 && marks<=100)
    {
        printf("Pass\n");
    }
    else
    {
        printf("Wrong marks\n");
    }
    return 0;

}

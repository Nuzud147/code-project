/*20. Diamond Pattern
a. Write a C program that prints a diamond pattern.
*/
#include<stdio.h>
int main()
{
    int r;
    scanf("%d",&r);
    for(int i=1;i<=r;i++)
    {
        for(int j=1;j<=r-i;j++)
        {
            printf(" ");
        }
        for(int j=1;j<=2*i-1;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for(int i=r-1;i>=1;i--){
        for(int j=1;j<=r-i;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

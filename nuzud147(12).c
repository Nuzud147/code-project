/*12. Problem: Sum of Digits
a. Write a program that takes an integer as input and calculates the sum of its digits
using a while loop.
*/
#include<stdio.h>
int main ()
{
   int n,sum=0;
   scanf("%d",&n);

   while(n!=0)
   {
       sum+=n%10;
       n /=10;
   }
   printf("%d\n",sum);
   return 0;
}

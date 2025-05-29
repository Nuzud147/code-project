/*17. Problem: Sum of Array Elements
a. Write a program that takes an array of integers and finds the sum of its elements
using a loop.
*/
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0;i < n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int sum = 0;
    for(int i = 0;i<n;i++)
    {
        sum += arr[i];
    }
    printf("%d\n",sum);
    return 0;
}

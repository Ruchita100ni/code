#include<stdio.h>
int main()
{
    int n;
    printf("Enter the Number:");
    scanf("%d",&n);
    //Prime Number and Not Prime Number n ki value
    int a=0;
    for(int i=2;i<=n;i++)
    {
        if(n%i==0)    //i is a factor of n
        {
           a=1;
           break;
        }
    }
    if(a==0)
    {
        printf("The given number is prime");
    }
    else{
        printf("The given number is not prime");
    }
    return 0;
}
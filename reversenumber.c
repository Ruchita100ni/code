#include<stdio.h>
int main()
{
     int n,r=0;
     printf("Enter the Number:");
     scanf("%d",&n);
    while(n!=0){
        r=r+(n%10);
        r=r*10;
        n=n/10;
    }
    printf("The Number Reverse %d",r);
    return 0;
}
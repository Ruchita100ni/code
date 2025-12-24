#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter the Number:");
    scanf("%d",&n);
    //1+2+3+4+5....n terms
     int sum=0;
    for(int i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    printf("The Sum of %d",sum);
    return 0;
}
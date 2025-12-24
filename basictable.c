#include<stdio.h>
int main()
{
    int n;
    printf("Enter the Number:");
    scanf("%d",&n);
    
    for(int i=n;i<=20;i=i+2)
    {
        printf("%d ",i);
    }
    return 0;
}
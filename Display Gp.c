#include<stdio.h>
int main()
{
    int n;
    printf("Enter the Number:");
    scanf("%d",&n);

    // 100 50 25 upto n term
    float a=100;
    for(int i=1;i<=n;i++)
    {
        printf("%f ",a);
        a=a/2;
    }
    return 0;
}
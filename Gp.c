#include<stdio.h>
int main()
{
    int n;     //variable box
    printf("Enter a Number:");
    scanf("%d",&n);
    //1 2 4 8 16 32 64 128 256 512
    int a=1;
    for(i=1;i<=n;i++)
    {
        printf("%d",a);
        a=a*2;
    }
    return 0;
}
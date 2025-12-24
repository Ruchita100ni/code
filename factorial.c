#include<stdio.h>
int main()
{
    int n;
    printf("Enter the Number:");
    scanf("%d",&n);

    int f=1;  // factorial Number 5!=5*4*3*2*1=120
    for(int i=1;i<=n;i++)
    {
        f=f*i;
    }
    printf("The Number is factorial %d",f);
    return 0;
}
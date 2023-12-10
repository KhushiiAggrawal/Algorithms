#include<stdio.h>

int factorial(int n)
{
    int i,fact=1;
    if(n==0)
    {
        return 1;
    }
    for(i=n;i>0;i--)
    {
        fact= fact*i;
    }
    return fact;
}
int main()
{
    int n;
    printf("No. for factorial:");
    scanf("%d",&n);
    printf("%d " , factorial(n));
    return 0;
}

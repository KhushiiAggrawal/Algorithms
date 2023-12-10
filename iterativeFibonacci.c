#include<stdio.h>

int fibonacci(n)
{
    int a=0,b=1,i;
    for(i=0;i<n;i++)
    {
        printf("%d, ",a);
        int c = a+b;
        a=b;
        b=c;
    }
}
int main()
{
    int n;
    printf("Enter no. terms:");
    scanf("%d",&n);
    fibonacci(n);
}

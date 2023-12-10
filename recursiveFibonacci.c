#include<stdio.h>

int fibo(int n,int a,int b)
{
    if(n>2)
    {
        int c = a+b;
        printf("%d, ",c);
        fibo(n-1,b,c);
    }
    return;
}
int fibonacci(int n)
{
    if(n<=0)
    {
        printf("invalid");
    }
    else if(n==1)
    {
        printf("0");
    }
    else if(n==2)
    {
        printf("0, 1");
    }
    else
    {
        printf("0, 1, ");
        fibo(n,0,1);
    }
}
int main()
{
    int n;
    printf("No. of terms: ");
    scanf("%d",&n);
    fibonacci(n);
}

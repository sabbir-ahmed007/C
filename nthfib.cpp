#include<stdio.h>
int fib(int n)
{
    if(n<=1)
        return n;
    return (fib(n-1)+fib(n-2));
}

int main()
{
    int f;
    scanf("%d",&f);
    printf("%d",fib(f));
    return 0;
}

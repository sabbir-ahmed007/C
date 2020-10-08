#include<stdio.h>
int fib(int n)
{
    if(n==0)
        return 0;
    else if(n==1)
        return 1;
    else
        return(fib(n-1)+fib(n-2));
}
int main()
{
    int i=0,c,num;
    scanf("%d",&num);
    for(c=1;c<=num;c++)
    {
        printf("%d",fib(i));
        i++;
    }
    return 0;
}

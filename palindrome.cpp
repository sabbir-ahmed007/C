#include<stdio.h>
int main()
{
    int n,reverse= 0,temp;
    scanf("%d",&n);
    temp = n;
    while(temp!= 0)
    {
        reverse *= 10;
        reverse += temp%10;
        temp /=10;

    }
    if (n == reverse)
        printf("palindrome");
    else
        printf("not");
    return 0;
}

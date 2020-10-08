#include<stdio.h>
int main()
{
    int number,i;
    printf("Enter a number");
    scanf("%d",&number);
    for(i=1;i<=number;i++)
    {
        if (number%i==0)
            printf("%d\t",i);
    }
    return 0;
}

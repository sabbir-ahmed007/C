#include<stdio.h>
int main()
{
    int num,remainder;
    printf("Enter a Number: ");
    scanf("%d",&num);
    for(int i= 1; i<= num-1; i++)
    {
        remainder=num%10;
        remainder += remainder*remainder*remainder;
        remainder%10;
    }



}

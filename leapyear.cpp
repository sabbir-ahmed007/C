#include<stdio.h>
int main()
{
    int yr;
    printf("Enter the year: ");
    scanf("%d",&yr);
    yr % 400 == 0 && yr % 100 ==0 || yr % 4==0 ? printf("leap year"): printf("not leap");
    return 0;
}

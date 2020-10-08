#include<stdio.h>

int main()
{
    int number_1,number_2,*x,*y,temp;
    printf("Enter Numnber 1 :\n");
    scanf("%d",&number_1);
    printf("Enter Numnber 2 :\n");
    scanf("%d",&number_2);
    printf("Before swap: Number 1 =%d , Number 2= %d\n",number_1,number_2);
    x=&number_1;
y=&number_2;

temp = *y;
*y = *x;
*x = temp;
    printf("After swap: Number 1 =%d , Number 2= %d",number_1,number_2);



}

#include<stdio.h>
int main()
{

    int temp,high,low;
    scanf("%d",&high);
    scanf("%d",&low);
    do{
            temp = high%low;
            high = low;
            low =temp;

        }while(low!=0);


    printf("%d",high);
    return 0;
}

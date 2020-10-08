#include<stdio.h>
int main()
{

    int i=1 ,n;
    scanf("%d",&n);
    if(n==0)
        i=i;
    else
    {
        do{
            i=i*n;
            n=n-1;

        }while(n>1);

    }
    printf("%d",i);
    return 0;
}

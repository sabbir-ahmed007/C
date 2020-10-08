#include<stdio.h>
int main()
{

    int l,x,y;
    scanf("%d%d",&x,&y);
    if(x>y)
        l=x;
    else
        l=y;
    again:
       if(l%x==0 && l%y == 0)
        printf("lcm = %d",l);
       else{
        l+=1;
        goto again;

      }

    return 0;
}

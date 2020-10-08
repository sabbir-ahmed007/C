#include<stdio.h>
int main()
{
    int a=5,b = 6;
    int c;
    c= a&b;
    printf("The value of c from a&b is %d\n",c);
    c= a|b;
    printf("The value of c from a|b is %d\n",c);
    c= a^b;
    printf("The value of c from a^b is %d\n",c);
    c=a>>2;
    printf("The value of c from a>>b is %d\n",c);
    c=a<<2;
    printf("The value of c from a<<b is %d\n",c);
    return 0;
}

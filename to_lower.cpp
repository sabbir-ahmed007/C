#include<stdio.h>
int main()
{
    char  a;
    scanf("%c",&a);
    a = a + 'a'-'A';//or a = a+32
    
    printf("%c",a);
    return 0;
}

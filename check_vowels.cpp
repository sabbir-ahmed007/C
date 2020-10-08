#include<stdio.h>
void check_vowel(char);
int main()
{
    char ch;
    scanf("%c",&ch);
    check_vowel(ch);


}
void check_vowel(char input)
{
     if(input == 'a'|| input=='A' || input=='e'||input=='E')
        printf("%c is vowel",input);
    else
        printf("not");
}

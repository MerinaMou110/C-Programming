#include<stdio.h>
int main()
{
    char a;
    scanf("%c",&a);
    if('0'<=a && '9'>=a)
    {
        printf("IS DIGIT");
    }
    if('a'<=a && a<='z')
    {
        printf("ALPHA\nIS SMALL");
    }
     if('A'<=a && a<='Z')
    {
        printf("ALPHA\nIS CAPITAL");
    }
}
#include<stdio.h>
int main()
{
    int a=3,b=20;
    int sum=a+b;
    int mult=a*b;
    float div=b*1.0/a;
    int mod=b%a;
    int mod1=a%b;
    printf("%d %d %f %d %d",sum,mult,div,mod,mod1);



    return 0;
}
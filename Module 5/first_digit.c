#include<stdio.h>
int main(){

int a;
scanf("%d",&a);
int value=a/1000;  //value=4569/1000=4(vagsesh)
if(value%2==0)
{
    printf("EVEN");
}
else{
    printf("ODD");
}
return 0;

}
#include<stdio.h>
int main(){
     int x=10;
     int *p=&x;
     printf("%p\n",p);
     //dereferences
     //*p=300;

     printf("%p\n",x);
     }
#include<stdio.h>
void func(int i,int n){
    if(i==n+1) return;
    printf("%d\n",i);
    func(i+1,n);
}
int main(){
    int n;
    scanf("%d",&n);
    int i=1;
    func(i,n);
}
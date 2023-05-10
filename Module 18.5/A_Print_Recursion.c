#include<stdio.h>
void func(int n){
    if(n==0) return;
    printf("I love Recursion\n");
    func(n-1);
}
int main(){
    int n;
    scanf("%d",&n);
    func(n);
    return 0;
}
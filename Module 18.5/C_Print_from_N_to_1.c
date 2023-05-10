#include<stdio.h>
void func(int i){
    if(i==0) return;

    printf("%d",i);
    if(i>1){
    printf(" ");

    }
    func(i-1);
}
int main(){
    int n;
    scanf("%d",&n);
    func(n);
}
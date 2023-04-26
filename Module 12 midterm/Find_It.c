#include<stdio.h>
int main(){
    int n,x;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    scanf("%d",&x);
    int count=0;
    for(int i=0;i<n;i++){
        if(a[i]==x){
            count++;
        }
    }
    printf("%d",count);
}
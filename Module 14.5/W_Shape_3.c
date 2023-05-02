#include<stdio.h>
int main(){
    int n,k=1;
    scanf("%d",&n);
    int p=2*n;
    int s=n-1;
    for(int i=1;i<=p;i++){
        for(int j=1;j<=s;j++){
            printf(" ");
        }
        for(int j=1;j<=k;j++){
            printf("*");
        }
       if(i<=n-1){
            s--;
            k=k+2;
       }
       else if(i>n){
        s++;
        k=k-2;
       }
        
        printf("\n");
    }
    
}
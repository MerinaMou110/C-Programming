#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int s=n-1;
    int k=1;
    int a=3;
    for(int i=1;i<=n;i++){
           for(int j=0;j<s;j++){
            printf(" ");
           }
           if(i%2!=0){
            for(int j=0;j<k;j++){
                printf("^");
            }
           }
        else if(i%2==0){
            for(int j=1;j<=a;j++){
                printf("*");
            }
         }
          s--;
          if(i%2!=0){
              k=k+4;
          }
          
           if(i%2==0){
             a=a+4;
           }
           
           printf("\n");
           }
           return 0;
          


    }

#include<stdio.h>
#include<stdlib.h>
int main(){
    int a,sum1=0,sum2=0;
    scanf("%d",&a);
    int ar[a][a];
    for(int i=0;i<a;i++){
        for(int j=0;j<a;j++){
            scanf("%d",&ar[i][j]);
        }
    }

 for(int i=0;i<a;i++){
        for(int j=0;j<a;j++){
            if(i==j){
            sum1=sum1+ar[i][j];
            }
            if(i+j==a-1){
                sum2=sum2+ar[i][j];
            }
        }
    }

    int summation=abs(sum1-sum2);
    printf("%d",summation);


}
#include<stdio.h>
#include<stdlib.h>
int main(){
     int row,col;
    scanf("%d %d",&row,&col);
    int ar[row][col];
    int n;
    
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            scanf("%d",&ar[i][j]);
            
        }
    }
   scanf("%d",&n);
   int flag=0;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
           if(ar[i][j]==n){
                
                flag=1;
                break;
                
            }
            
        }
    }
    if(flag==1){
        printf("will not take number");
    }
    else{
        printf("will take number");
    }
}
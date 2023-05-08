#include<stdio.h>
int main(){
    int row,col;

    scanf("%d %d",&row,&col);
    int ar[row][col];
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            scanf("%d",&ar[i][j]);
        }
    }
    int e;
    scanf("%d",&e);
          //printing specific row
    // for(int i=0;i<col;i++){
    //     printf("%d ",ar[e][i]);
    // }
             //or
// for(int i=0;i<row;i++){
//         for(int j=0;j<col;j++){
//             if(i==e){
//             printf("%d ",ar[i][j]);
//         }
//         //printf("\n");
//      }
// }


            //printing specific column
  for(int i=0;i<row;i++)  {
    printf("%d\n",ar[i][e]);
  }        
}
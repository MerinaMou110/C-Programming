#include<stdio.h>
int main(){
    int n,x;
    scanf("%d",&n);
    int arr[n];
  
    for(int i=1;i<=n;i++){
        scanf("%d",&arr[i]);
    }
        scanf("%d",&x);
        int flag=0;

   for(int i=1;i<=n-1;i++){
         //int j=i+1;
         for(int j=i+1;j<=n;j++){
           if(arr[i]+arr[j]==x){
               // printf("%d %d\n",arr[i],arr[j]);
               flag=1;
               
            }
            
         }
         

   }
   if(flag==0){
    printf("NO\n");
   }
   else{
    printf("YES\n");
   }

}